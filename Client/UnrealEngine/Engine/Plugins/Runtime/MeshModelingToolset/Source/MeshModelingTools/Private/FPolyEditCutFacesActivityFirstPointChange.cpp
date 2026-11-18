// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// Apply @ 14cd5a810

void __thiscall
FPolyEditCutFacesActivityFirstPointChange::Apply
          (FPolyEditCutFacesActivityFirstPointChange *this,UObject *param_1)

{
  return;
}

// HasExpired @ 14cd6fb30

bool __thiscall
FPolyEditCutFacesActivityFirstPointChange::HasExpired
          (FPolyEditCutFacesActivityFirstPointChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (this->bHaveDoneUndo != false) {
    return true;
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UPolyEditCutFacesActivity::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cd6fb70;
  }
  param_1 = (UObject *)0x0;
LAB_14cd6fb70:
  if (*(int *)&param_1[2].field_0x14 != this->ActivityStamp) {
    return true;
  }
  return false;
}

// Revert @ 14cd7b400

void __thiscall
FPolyEditCutFacesActivityFirstPointChange::Revert
          (FPolyEditCutFacesActivityFirstPointChange *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = UPolyEditCutFacesActivity::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14cd7b43a;
  }
  param_1 = (UObject *)0x0;
LAB_14cd7b43a:
  if (*(longlong **)(param_1 + 2) == (longlong *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8693048828267331314>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditCutFacesActivity.cpp"
                       ,0x10e,"Activity->SurfacePathMechanic");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 2) + 0x328))();
  }
  this->bHaveDoneUndo = true;
  return;
}

// ToString @ 14cd81f00

FString * __thiscall
FPolyEditCutFacesActivityFirstPointChange::ToString
          (FPolyEditCutFacesActivityFirstPointChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FPolyEditCutFacesActivityFirstPointChange");
  return __return_storage_ptr__;
}

