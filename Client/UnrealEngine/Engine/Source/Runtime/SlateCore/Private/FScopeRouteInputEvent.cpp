// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FScopeRouteInputEvent @ 14242d040

FScopeRouteInputEvent * __thiscall
FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
          (FScopeRouteInputEvent *this,ESlateDebuggingInputEvent param_1,FName *param_2)

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
    (**(code **)(**(longlong **)FVar3.Data + 0x10))
              (*(longlong **)FVar3.Data,this->InputEvent,param_2);
    FVar3.Data = FVar3.Data + 8;
  }
  return this;
}

// ~FScopeRouteInputEvent @ 14242f0f0

void __thiscall
FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(FScopeRouteInputEvent *this)

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
    (**(code **)(**(longlong **)FVar3.Data + 0x20))(*(longlong **)FVar3.Data,this->InputEvent);
    FVar3.Data = FVar3.Data + 8;
  }
  return;
}

