// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 4

// Apply @ 149702cf0

void __thiscall FMeshVertexChange::Apply(FMeshVertexChange *this,UObject *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<IMeshVertexCommandChangeTarget>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
  plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149702d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,this,0);
    return;
  }
  pFVar3 = GetTypeName<IMeshVertexCommandChangeTarget>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ProcessChangeVertices @ 149715270

void __thiscall
FMeshVertexChange::ProcessChangeVertices
          (FMeshVertexChange *this,FDynamicMesh3 *param_1,
          TFunctionRef<void___cdecl(TArrayView<int_const_,int>)> *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  iVar1 = (this->Vertices).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28 = SUB84(pFVar2,0);
  uStack_24 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  iStack_10 = iVar1;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
  return;
}

// Revert @ 149717130

void __thiscall FMeshVertexChange::Revert(FMeshVertexChange *this,UObject *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<IMeshVertexCommandChangeTarget>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
  plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149717170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,this,1);
    return;
  }
  pFVar3 = GetTypeName<IMeshVertexCommandChangeTarget>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ToString @ 14971ac20

FString * __thiscall
FMeshVertexChange::ToString(FMeshVertexChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Mesh Vertex Change");
  return __return_storage_ptr__;
}

