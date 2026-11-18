// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a46dc50

UScriptStruct * __cdecl FRigUnit_HierarchyImportFromSkeleton::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton,
                         (UObject *)pUVar1,L"RigUnit_HierarchyImportFromSkeleton");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton.OuterSingleton;
}

// GetExecuteContextStruct @ 14a46dcd0

UScriptStruct * __thiscall
FRigUnit_HierarchyImportFromSkeleton::GetExecuteContextStruct
          (FRigUnit_HierarchyImportFromSkeleton *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a46e1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyImportFromSkeleton::Execute(FRigUnit_HierarchyImportFromSkeleton *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->NameSpace,this->bIncludeCurves,
                this->bIncludeMeshSockets,this->bIncludeVirtualBones,&this->Items);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a529ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyImportFromSkeleton::Execute
          (FRigUnit_HierarchyImportFromSkeleton *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->NameSpace,this->bIncludeCurves,this->bIncludeMeshSockets,
                this->bIncludeVirtualBones,&this->Items);
  return;
}

// RigVMExecute @ 14a548d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyImportFromSkeleton::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar9;
  FControlRigExecuteContext *pFVar10;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  bVar4 = (bool)*puVar7;
  if (iVar2 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  bVar5 = (bool)*puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar1 = (bool)*puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar6,bVar4,bVar5,bVar1,pTVar9);
  return;
}

// StaticExecute @ 14a581a70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyImportFromSkeleton::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,bool param_3,bool param_4,bool param_5,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_6)

{
  UAnimationDataSourceRegistry *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  URigHierarchyController *this;
  UClass *pUVar7;
  USkeletalMeshComponent *pUVar8;
  USkeletalMesh *pUVar9;
  FReferenceSkeleton *pFVar10;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar11;
  FString *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FName *this_00;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  USkeletalMesh *local_f8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> local_e0;
  int local_d0;
  USkeletalMeshComponent *local_c8;
  longlong local_c0;
  FString local_b8;
  URigHierarchyController *local_a8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_a0;
  FString local_90;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_80;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_70;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_60;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_50;
  
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  bVar4 = FRigUnit_DynamicHierarchyBase::IsValidToRunInContext(param_1,true,&local_b8);
  if (!bVar4) goto LAB_14a5820cb;
  param_6->ArrayNum = 0;
  if (param_6->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_6->AllocatorInstance,0,&param_6->ArrayMax);
  }
  this = URigHierarchy::GetController(param_1->Hierarchy,true);
  local_a8 = this;
  if (this == (URigHierarchyController *)0x0) goto LAB_14a5820cb;
  local_d0 = this->CurrentInstructionIndex;
  this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
  pUVar1 = (param_1->UnitContext).DataSourceRegistry;
  local_f8 = (USkeletalMesh *)0x0;
  pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  pUVar8 = (USkeletalMeshComponent *)
           UAnimationDataSourceRegistry::RequestSource(pUVar1,&UControlRig::OwnerComponent,pUVar7);
  if (pUVar8 == (USkeletalMeshComponent *)0x0) {
LAB_14a581bdb:
    pUVar1 = (param_1->UnitContext).DataSourceRegistry;
    pUVar7 = Z_Construct_UClass_USkeleton_NoRegister();
    pUVar8 = (USkeletalMeshComponent *)
             UAnimationDataSourceRegistry::RequestSource(pUVar1,&UControlRig::OwnerComponent,pUVar7)
    ;
    local_c8 = pUVar8;
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      pUVar7 = Z_Construct_UClass_USkeleton_NoRegister();
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) {
        local_c8 = (USkeletalMeshComponent *)0x0;
        pUVar8 = (USkeletalMeshComponent *)0x0;
      }
      if (pUVar8 != (USkeletalMeshComponent *)0x0) {
        pFVar10 = (FReferenceSkeleton *)&pUVar8->_padding_;
        goto LAB_14a581c40;
      }
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) {
      pUVar8 = (USkeletalMeshComponent *)0x0;
    }
    if (pUVar8 == (USkeletalMeshComponent *)0x0) goto LAB_14a581bdb;
    pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar8);
    if (pUVar9 != (USkeletalMesh *)0x0) {
      local_f8 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar8);
      local_c8 = (USkeletalMeshComponent *)(**(code **)(local_f8->_padding_ + 0x408))(local_f8);
      pFVar10 = (FReferenceSkeleton *)(**(code **)(local_f8->_padding_ + 800))(local_f8);
LAB_14a581c40:
      if (pFVar10 != (FReferenceSkeleton *)0x0) {
        if (param_5) {
          pTVar11 = URigHierarchyController::ImportBones
                              (this,&local_a0,pFVar10,param_2,false,false,false,false);
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(param_6,pTVar11);
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
        }
        else {
          local_c0 = (longlong)(pFVar10->FinalRefBoneInfo).ArrayNum;
          uVar15 = 0;
          local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e0.ArrayNum = 0;
          local_e0.ArrayMax = 0;
          local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f0.ArrayNum = 0;
          local_f0.ArrayMax = 0;
          uVar16 = uVar15;
          uVar18 = uVar15;
          if (0 < local_c0) {
            do {
              uVar17 = (uint)uVar18;
              uVar5 = 0;
              if ((int)uVar17 < (pFVar10->FinalRefBoneInfo).ArrayNum) {
                uVar5 = ~uVar17 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              this_00 = (FName *)((pFVar10->FinalRefBoneInfo).AllocatorInstance.Data + uVar15);
              uVar5 = 0;
              if ((int)uVar17 < (pFVar10->FinalRefBonePose).ArrayNum) {
                uVar5 = ~uVar17 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar14 = (pFVar10->FinalRefBonePose).AllocatorInstance.Data + uVar16;
              pFVar12 = ::FName::ToString(this_00,&local_90);
              bVar4 = VirtualBoneNameHelpers::CheckVirtualBonePrefix(pFVar12);
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              if (!bVar4) {
                if (((local_e0.AllocatorInstance.Data <= this_00) &&
                    (this_00 < (FName *)(local_e0.AllocatorInstance.Data +
                                        (longlong)local_e0.ArrayMax * 0xc))) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = local_e0.ArrayNum;
                if (local_e0.ArrayNum == local_e0.ArrayMax) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x40c,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
                }
                local_e0.ArrayNum = iVar6 + 1;
                *(FName *)(local_e0.AllocatorInstance.Data + (longlong)iVar6 * 0xc) = *this_00;
                *(uint *)(local_e0.AllocatorInstance.Data + (longlong)iVar6 * 0xc + 8) =
                     this_00[1].ComparisonIndex.Value;
                if (((local_f0.AllocatorInstance.Data <= pFVar14) &&
                    (pFVar14 < local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 0x60)
                    ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = local_f0.ArrayNum;
                if (local_f0.ArrayNum == local_f0.ArrayMax) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x1060,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
                }
                local_f0.ArrayNum = iVar6 + 1;
                uVar3 = *(undefined8 *)(pFVar14 + 8);
                lVar13 = (longlong)iVar6 * 0x60;
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13) = *(undefined8 *)pFVar14;
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 8) = uVar3;
                uVar3 = *(undefined8 *)(pFVar14 + 0x18);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x10) =
                     *(undefined8 *)(pFVar14 + 0x10);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x10 + 8) = uVar3;
                uVar3 = *(undefined8 *)(pFVar14 + 0x28);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x20) =
                     *(undefined8 *)(pFVar14 + 0x20);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x20 + 8) = uVar3;
                uVar3 = *(undefined8 *)(pFVar14 + 0x38);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x30) =
                     *(undefined8 *)(pFVar14 + 0x30);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x30 + 8) = uVar3;
                uVar3 = *(undefined8 *)(pFVar14 + 0x48);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x40) =
                     *(undefined8 *)(pFVar14 + 0x40);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x40 + 8) = uVar3;
                uVar3 = *(undefined8 *)(pFVar14 + 0x58);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x50) =
                     *(undefined8 *)(pFVar14 + 0x50);
                *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar13 + 0x50 + 8) = uVar3;
              }
              uVar15 = uVar15 + 0xc;
              local_c0 = local_c0 + -1;
              uVar16 = uVar16 + 0x60;
              uVar18 = (ulonglong)(uVar17 + 1);
            } while (local_c0 != 0);
            local_c0 = 0;
            this = local_a8;
          }
          pTVar11 = URigHierarchyController::ImportBones
                              (this,&local_80,&local_e0,&local_f0,param_2,false,false,false,false);
          if (param_6 != pTVar11) {
            pFVar14 = (param_6->AllocatorInstance).Data;
            if (pFVar14 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar14);
            }
            (param_6->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
            (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            param_6->ArrayNum = pTVar11->ArrayNum;
            param_6->ArrayMax = pTVar11->ArrayMax;
            pTVar11->ArrayNum = 0;
            pTVar11->ArrayMax = 0;
          }
          if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.AllocatorInstance.Data);
          }
          if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.AllocatorInstance.Data);
          }
          if ((FName *)local_e0.AllocatorInstance.Data != (FName *)0x0) {
            FMemory::Free(local_e0.AllocatorInstance.Data);
          }
        }
        if (param_3) {
          if (local_f8 == (USkeletalMesh *)0x0) {
            if (local_c8 == (USkeletalMeshComponent *)0x0) goto LAB_14a582065;
            pTVar11 = URigHierarchyController::ImportCurves
                                (this,&local_60,(USkeleton *)local_c8,*param_2,false,false,false);
            TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
            Append<FRigElementKey,TSizedDefaultAllocator<32>_>(param_6,pTVar11);
            local_70.AllocatorInstance.Data = local_60.AllocatorInstance.Data;
          }
          else {
            pTVar11 = URigHierarchyController::ImportCurvesFromSkeletalMesh
                                (this,&local_70,local_f8,*param_2,false,false,false);
            TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
            Append<FRigElementKey,TSizedDefaultAllocator<32>_>(param_6,pTVar11);
          }
          if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.AllocatorInstance.Data);
          }
        }
LAB_14a582065:
        if ((param_4) && (local_f8 != (USkeletalMesh *)0x0)) {
          pTVar11 = URigHierarchyController::ImportSocketsFromSkeletalMesh
                              (this,&local_50,local_f8,param_2,false,false,false,false,false);
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
          Append<FRigElementKey,TSizedDefaultAllocator<32>_>(param_6,pTVar11);
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  this->CurrentInstructionIndex = local_d0;
LAB_14a5820cb:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

