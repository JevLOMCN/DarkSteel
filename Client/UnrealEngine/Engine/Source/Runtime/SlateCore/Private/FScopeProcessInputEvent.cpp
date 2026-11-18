// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FScopeProcessInputEvent @ 14242cfc0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopeProcessInputEvent * __thiscall
FSlateDebugging::FScopeProcessInputEvent::FScopeProcessInputEvent
          (FScopeProcessInputEvent *this,ESlateDebuggingInputEvent param_1,FInputEvent *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res10 [8];
  
  this->InputEvent = param_1;
  iVar2 = RoutingEvents.ArrayNum;
  pFVar1 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3 = RoutingEvents.AllocatorInstance;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    (**(code **)**(undefined8 **)FVar3.Data)(*(undefined8 **)FVar3.Data,this->InputEvent,param_2);
    FVar3.Data = FVar3.Data + 8;
  }
  return this;
}

// ~FScopeProcessInputEvent @ 14242f070

void __thiscall
FSlateDebugging::FScopeProcessInputEvent::~FScopeProcessInputEvent(FScopeProcessInputEvent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res10 [8];
  
  iVar2 = RoutingEvents.ArrayNum;
  pFVar1 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar3.Data + 0x28))(*(longlong **)FVar3.Data,this->InputEvent);
    FVar3.Data = FVar3.Data + 8;
  }
  return;
}

