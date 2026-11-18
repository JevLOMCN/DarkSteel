// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 6

// FMeshReplacementChange @ 1496f8ba0

FMeshReplacementChange * __thiscall
FMeshReplacementChange::FMeshReplacementChange
          (FMeshReplacementChange *this,TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *param_1,
          TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicMesh3 *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMeshReplacementChange__6B_;
  (this->Before).Object = (FDynamicMesh3 *)0x0;
  (this->Before).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->After).Object = (FDynamicMesh3 *)0x0;
  (this->After).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnChangeAppliedFunc = 0;
  *(undefined8 *)&(this->OnChangeAppliedFunc).field_0x28 = 0;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Before).SharedReferenceCount.ReferenceController;
  (this->Before).Object = pFVar2;
  (this->Before).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->After).SharedReferenceCount.ReferenceController;
  (this->After).Object = pFVar2;
  (this->After).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FMeshReplacementChange @ 1496f8c60

FMeshReplacementChange * __thiscall
FMeshReplacementChange::FMeshReplacementChange(FMeshReplacementChange *this)

{
  this->_padding_ = (longlong)&___7FMeshReplacementChange__6B_;
  (this->Before).Object = (FDynamicMesh3 *)0x0;
  (this->Before).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->After).Object = (FDynamicMesh3 *)0x0;
  (this->After).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnChangeAppliedFunc = 0;
  *(undefined8 *)&(this->OnChangeAppliedFunc).field_0x28 = 0;
  return this;
}

// Apply @ 149702bf0

void __thiscall FMeshReplacementChange::Apply(FMeshReplacementChange *this,UObject *param_1)

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
  FMeshReplacementChange *local_res20;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar5 = GetTypeName<IMeshReplacementCommandChangeTarget>(&local_38);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar2 = Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
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
  pFVar5 = GetTypeName<IMeshReplacementCommandChangeTarget>(&local_38);
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

// ProcessChangeVertices @ 149714fe0

void __thiscall
FMeshReplacementChange::ProcessChangeVertices
          (FMeshReplacementChange *this,FDynamicMesh3 *param_1,
          TFunctionRef<void___cdecl(TArrayView<int_const_,int>)> *param_2,bool param_3)

{
  longlong lVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int local_58 [2];
  ForAnyElementType local_50;
  undefined8 local_48;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((param_1 == (FDynamicMesh3 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangedMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Changes\\MeshReplacementChange.cpp"
                         ,0x2c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = (param_1->VertexRefCounts).UsedCount;
  uVar11 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar13 = uVar11;
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&local_50,0,(int *)((longlong)&local_48 + 4));
    uVar13 = local_48 & 0xffffffff;
  }
  uVar8 = (uint)uVar13;
  uVar12 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar12 != 0) &&
     (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar11 = 1;
    uVar9 = 1;
    if ((int)uVar12 < 2) goto LAB_1497150d9;
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar3 + (uVar11 >> 9) * 8) +
                        (ulonglong)((uint)uVar11 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar9 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar12);
  }
  uVar9 = (uint)uVar11;
LAB_1497150d9:
  if (uVar9 != uVar12) {
    while( true ) {
      iVar10 = (int)uVar11;
      iVar7 = (int)uVar13;
      local_58[0] = iVar10;
      if ((local_50.Data <= (FScriptContainerElement *)local_58) &&
         ((FScriptContainerElement *)local_58 < local_50.Data + (longlong)local_48._4_4_ * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (int)local_48;
      }
      if (iVar7 == local_48._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_50,(int *)((longlong)&local_48 + 4));
      }
      uVar8 = iVar7 + 1;
      local_48 = CONCAT44(local_48._4_4_,uVar8);
      uVar9 = iVar10 + 1;
      uVar11 = (ulonglong)uVar9;
      *(int *)(local_50.Data + (longlong)iVar7 * 4) = local_58[0];
      if ((int)uVar9 < (int)uVar12) {
        pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar1 = (uVar11 >> 9) * 8;
          lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
          if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
             (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != -1)) goto LAB_1497151d0;
          uVar9 = (uint)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while ((int)uVar9 < (int)uVar12);
      }
      if (uVar9 == uVar12) break;
LAB_1497151d0:
      uVar13 = (ulonglong)uVar8;
    }
  }
  local_38 = local_50.Data;
  if (((int)uVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_1c = uStack_2c;
  uStack_30 = uVar8;
  uStack_20 = uVar8;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_28);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// Revert @ 149717030

void __thiscall FMeshReplacementChange::Revert(FMeshReplacementChange *this,UObject *param_1)

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
  FMeshReplacementChange *local_res20;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar5 = GetTypeName<IMeshReplacementCommandChangeTarget>(&local_38);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar2 = Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
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
  pFVar5 = GetTypeName<IMeshReplacementCommandChangeTarget>(&local_38);
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

// ToString @ 14971abf0

FString * __thiscall
FMeshReplacementChange::ToString(FMeshReplacementChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Mesh Change");
  return __return_storage_ptr__;
}

