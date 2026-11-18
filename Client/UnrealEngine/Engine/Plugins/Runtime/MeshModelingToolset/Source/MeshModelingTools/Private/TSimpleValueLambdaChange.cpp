// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// Apply @ 14ccde350

void __thiscall
TSimpleValueLambdaChange<int>::Apply(TSimpleValueLambdaChange<int> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  local_res8[0] = 0;
  local_res10 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ValueChangeFunc);
  plVar1 = *(longlong **)&(this->ValueChangeFunc).field_0x28;
  pcVar2 = *(code **)&this->ValueChangeFunc;
  plVar4 = (longlong *)&(this->ValueChangeFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,&this->FromValue,&this->ToValue,local_res8);
  return;
}

// Apply @ 14ccde3c0

void __thiscall
TSimpleValueLambdaChange<TArray<int,TSizedDefaultAllocator<32>_>_>::Apply
          (TSimpleValueLambdaChange<TArray<int,TSizedDefaultAllocator<32>_>_> *this,UObject *param_1
          )

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  local_res8[0] = 0;
  local_res10 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ValueChangeFunc);
  plVar1 = *(longlong **)&(this->ValueChangeFunc).field_0x28;
  pcVar2 = *(code **)&this->ValueChangeFunc;
  plVar4 = (longlong *)&(this->ValueChangeFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,&this->FromValue,&this->ToValue,local_res8);
  return;
}

// Revert @ 14cd1ca90

void __thiscall
TSimpleValueLambdaChange<int>::Revert(TSimpleValueLambdaChange<int> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  local_res8[0] = 1;
  local_res10 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ValueChangeFunc);
  plVar1 = *(longlong **)&(this->ValueChangeFunc).field_0x28;
  pcVar2 = *(code **)&this->ValueChangeFunc;
  plVar4 = (longlong *)&(this->ValueChangeFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,&this->ToValue,&this->FromValue,local_res8);
  return;
}

// Revert @ 14cd1cb00

void __thiscall
TSimpleValueLambdaChange<TArray<int,TSizedDefaultAllocator<32>_>_>::Revert
          (TSimpleValueLambdaChange<TArray<int,TSizedDefaultAllocator<32>_>_> *this,UObject *param_1
          )

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  local_res8[0] = 1;
  local_res10 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ValueChangeFunc);
  plVar1 = *(longlong **)&(this->ValueChangeFunc).field_0x28;
  pcVar2 = *(code **)&this->ValueChangeFunc;
  plVar4 = (longlong *)&(this->ValueChangeFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,&this->ToValue,&this->FromValue,local_res8);
  return;
}

