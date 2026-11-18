// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 8

// FMeshChange @ 1496f8b00

FMeshChange * __thiscall
FMeshChange::FMeshChange
          (FMeshChange *this,
          TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
          param_1)

{
  FDynamicMeshChange *this_00;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  *pTVar1;
  
  this->_padding_ = (longlong)&___7FMeshChange__6B_;
  pTVar1 = &this->DynamicMeshChange;
  *(undefined8 *)&this->OnChangeAppliedFunc = 0;
  pTVar1->Ptr = (FDynamicMeshChange *)0x0;
  *(undefined8 *)&(this->OnChangeAppliedFunc).field_0x28 = 0;
  if ((FDynamicMeshChange *)pTVar1 != param_1.Ptr) {
    pTVar1->Ptr = (FDynamicMeshChange *)((param_1.Ptr)->OldVertices).AllocatorInstance.Data;
    ((param_1.Ptr)->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  this_00 = (FDynamicMeshChange *)((param_1.Ptr)->OldVertices).AllocatorInstance.Data;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  return this;
}

// FMeshChange @ 1496f8b70

FMeshChange * __thiscall FMeshChange::FMeshChange(FMeshChange *this)

{
  this->_padding_ = (longlong)&___7FMeshChange__6B_;
  (this->DynamicMeshChange).Ptr = (FDynamicMeshChange *)0x0;
  *(undefined8 *)&this->OnChangeAppliedFunc = 0;
  *(undefined8 *)&(this->OnChangeAppliedFunc).field_0x28 = 0;
  return this;
}

// ~FMeshChange @ 1496fae80

void __thiscall FMeshChange::~FMeshChange(FMeshChange *this)

{
  longlong *plVar1;
  FDynamicMeshChange *this_00;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FMeshChange__6B_;
  if (*(longlong *)&this->OnChangeAppliedFunc != 0) {
    plVar1 = *(longlong **)&(this->OnChangeAppliedFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnChangeAppliedFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this_00 = (this->DynamicMeshChange).Ptr;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  return;
}

// Apply @ 149702af0

void __thiscall FMeshChange::Apply(FMeshChange *this,UObject *param_1)

{
  code *pcVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FString *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FMeshChange *local_res20;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar5 = GetTypeName<IMeshCommandChangeTarget>(&local_38);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar2 = Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,this,0);
    if (*(void **)&this->OnChangeAppliedFunc != (void *)0x0) {
      local_res10[0] = 1;
      local_res18 = param_1;
      local_res20 = this;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChangeAppliedFunc);
      plVar3 = *(longlong **)&(this->OnChangeAppliedFunc).field_0x28;
      pcVar1 = *(code **)&this->OnChangeAppliedFunc;
      plVar6 = (longlong *)&(this->OnChangeAppliedFunc).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar6 = plVar3;
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(uVar4,&local_res20,&local_res18,local_res10);
    }
    return;
  }
  pFVar5 = GetTypeName<IMeshCommandChangeTarget>(&local_38);
  pwVar7 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// ApplyChangeToMesh @ 1497032e0

void __thiscall
FMeshChange::ApplyChangeToMesh(FMeshChange *this,FDynamicMesh3 *param_1,bool param_2)

{
  UE::Geometry::FDynamicMeshChange::Apply((this->DynamicMeshChange).Ptr,param_1,param_2);
  return;
}

// ProcessChangeVertices @ 149714f00

void __thiscall
FMeshChange::ProcessChangeVertices
          (FMeshChange *this,FDynamicMesh3 *param_1,
          TFunctionRef<void___cdecl(TArrayView<int_const_,int>)> *param_2,bool param_3)

{
  FDynamicMeshChange *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  this_00 = (this->DynamicMeshChange).Ptr;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (this_00 == (FDynamicMeshChange *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6619825916434448340>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Changes\\MeshChange.cpp"
                       ,0x2c,"DynamicMeshChange");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UE::Geometry::FDynamicMeshChange::GetAffectedVertices(this_00,&local_38,param_3);
  }
  iVar2 = local_38.ArrayNum;
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_20 = iVar2;
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iVar2;
  uStack_c = uStack_1c;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// Revert @ 149716f30

void __thiscall FMeshChange::Revert(FMeshChange *this,UObject *param_1)

{
  code *pcVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FString *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FMeshChange *local_res20;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar5 = GetTypeName<IMeshCommandChangeTarget>(&local_38);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar2 = Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,this,1);
    if (*(void **)&this->OnChangeAppliedFunc != (void *)0x0) {
      local_res10[0] = 0;
      local_res18 = param_1;
      local_res20 = this;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChangeAppliedFunc);
      plVar3 = *(longlong **)&(this->OnChangeAppliedFunc).field_0x28;
      pcVar1 = *(code **)&this->OnChangeAppliedFunc;
      plVar6 = (longlong *)&(this->OnChangeAppliedFunc).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar6 = plVar3;
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(uVar4,&local_res20,&local_res18,local_res10);
    }
    return;
  }
  pFVar5 = GetTypeName<IMeshCommandChangeTarget>(&local_38);
  pwVar7 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// ToString @ 14971abc0

FString * __thiscall FMeshChange::ToString(FMeshChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Mesh Change");
  return __return_storage_ptr__;
}

