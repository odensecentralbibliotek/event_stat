<?php
if(isset($row->field_field_event_hold))
{
    foreach($row->field_field_event_hold as $i => $item)
    {
        $entity = entity_load_single('field_collection_item',$item['raw']['value']);
        $bg_color =  $entity->field_efterbehandling_workflow['und'][0]['value'] != 30 ? 'green' : 'red'; // get workflow id from name..
        if($i == 0)
        {
            echo "redigér <a href='/field-collection/field-event-hold/".$entity->item_id."/edit'><div style='display:inline-block;color:".$bg_color."';'>".$entity->field_hold_navn['und'][0]['value']."</div></a>";
        }
        else
        {
             echo ", <a href='/field-collection/field-event-hold/".$entity->item_id."/edit'><div style='display:inline-block;color:".$bg_color.";'>".$entity->field_hold_navn['und'][0]['value']."</div></a>";
        }
    }
}
