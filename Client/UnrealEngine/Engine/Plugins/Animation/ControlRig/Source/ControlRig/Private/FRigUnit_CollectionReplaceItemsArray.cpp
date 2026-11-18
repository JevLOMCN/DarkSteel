// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4c21d0

UScriptStruct * __cdecl FRigUnit_CollectionReplaceItemsArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItemsArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItemsArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray,
                         (UObject *)pUVar1,L"RigUnit_CollectionReplaceItemsArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItemsArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItemsArray.OuterSingleton;
}

// Execute @ 14a525a30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionReplaceItemsArray::Execute
          (FRigUnit_CollectionReplaceItemsArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&local_18,&this->Old,&this->New,this->RemoveInvalidItems,
                this->bAllowDuplicates,&this->Result);
  return;
}

// Execute @ 14a525ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionReplaceItemsArray::Execute(FRigUnit_CollectionReplaceItemsArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
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
  local_278.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Old,&this->New,
                this->RemoveInvalidItems,this->bAllowDuplicates,&this->Result);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530aa0

UScriptStruct * __thiscall
FRigUnit_CollectionReplaceItemsArray::GetExecuteContextStruct
          (FRigUnit_CollectionReplaceItemsArray *this)

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

// RigVMExecute @ 14a538d20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionReplaceItemsArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  FName *pFVar7;
  FName *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar11;
  FControlRigExecuteContext *pFVar12;
  TArrayView<FRigElementKey_const_,int> local_38;
  
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar9->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar9[1].Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar2 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar4 = (bool)*puVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar1 = (bool)*puVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar11 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  local_38.DataPtr = *(FRigElementKey **)puVar6;
  local_38.ArrayNum = *(int *)(puVar6 + 8);
  if (local_38.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,&local_38,pFVar7,pFVar8,bVar4,bVar1,pTVar11);
  return;
}

// StaticExecute @ 14a569690

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionReplaceItemsArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          FName *param_3,FName *param_4,bool param_5,bool param_6,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  UScriptStruct *pUVar9;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint local_88 [2];
  FRigElementKey local_80;
  FRigElementKey local_70;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_60 [2];
  
  if (param_1->Hierarchy == (URigHierarchy *)0x0) {
    param_7->ArrayNum = 0;
    if (param_7->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
      return;
    }
  }
  else {
    pUVar9 = StaticStruct();
    uVar5 = ((uint)((ulonglong)pUVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar9 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = param_1->Hierarchy->TopologyVersion;
    uVar7 = ::GetTypeHash(param_2);
    FVar2 = *param_3;
    uVar5 = ((uVar6 >> 0x10 ^ uVar6) + uVar5 * 0x11) - uVar7 ^ uVar7 >> 0xd;
    uVar6 = (-0x61c88647 - uVar5) - uVar7 ^ uVar5 << 8;
    uVar15 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xd;
    uVar5 = (uVar5 - uVar15) - uVar6 ^ uVar15 >> 0xc;
    uVar7 = (uVar6 - uVar5) - uVar15 ^ uVar5 << 0x10;
    uVar15 = (uVar15 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar6 = (uVar5 - uVar15) - uVar7 ^ uVar15 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar15 ^ uVar6 << 10;
    uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    iVar8 = uVar5 + FVar2.Number;
    uVar6 = ((uVar15 - uVar7) - uVar6 ^ uVar7 >> 0xf) + iVar8 * -0xc ^ (uint)(iVar8 * 0xc) >> 0xd;
    uVar5 = (iVar8 * -0xc + -0x61c88647) - uVar6 ^ uVar6 << 8;
    FVar2 = *param_4;
    uVar7 = (iVar8 * 0xc - uVar5) - uVar6 ^ uVar5 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar15 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar7 = (uVar6 - uVar15) - uVar5 ^ uVar15 >> 3;
    uVar6 = (uVar5 - uVar7) - uVar15 ^ uVar7 << 10;
    uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    iVar8 = uVar5 + FVar2.Number;
    uVar7 = ((uVar15 - uVar6) - uVar7 ^ uVar6 >> 0xf) + iVar8 * -0xd ^ (uint)(iVar8 * 0xd) >> 0xd;
    uVar5 = (iVar8 * -0xd + -0x61c88647) - uVar7 ^ uVar7 << 8;
    uVar6 = (iVar8 * 0xd - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 0x10;
    uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 10;
    iVar8 = ((uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xf) - (-(uint)param_5 & 0xe);
    uVar5 = 0x9e3779b9 - iVar8;
    if (param_5) {
      uVar5 = 0x9e3779ab - iVar8;
    }
    uVar12 = 0;
    uVar5 = uVar5 ^ iVar8 * 0x100;
    local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60[0].ArrayNum = 0;
    local_60[0].ArrayMax = 0;
    uVar7 = ((-(uint)param_5 & 0xe) - uVar5) - iVar8 ^ uVar5 >> 0xd;
    uVar6 = (iVar8 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar15 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar7 = (uVar7 - uVar6) - uVar15 ^ uVar15 >> 5;
    uVar5 = (uVar6 - uVar7) - uVar15 ^ uVar7 >> 3;
    uVar6 = (uVar15 - uVar5) - uVar7 ^ uVar5 << 10;
    uVar5 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf;
    pTVar10 = &URigHierarchy::FindCachedCollection(param_1->Hierarchy,uVar5)->Keys;
    if (pTVar10 == (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar8 = param_2->ArrayNum;
      uVar14 = uVar12;
      if (0 < iVar8) {
        do {
          uVar7 = (uint)uVar12;
          uVar6 = 0;
          if ((int)uVar7 < iVar8) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_80._0_8_ = *(undefined8 *)(&param_2->DataPtr->Type + uVar14);
          local_80.Name.Number = *(uint *)((longlong)&(param_2->DataPtr->Name).Number + uVar14);
          FRigVMFunction_NameReplace::StaticExecute
                    ((FRigVMExecuteContext *)param_1,&local_80.Name,param_3,param_4,&local_80.Name);
          iVar8 = URigHierarchy::GetIndex(param_1->Hierarchy,&local_80,true);
          if (iVar8 == -1) {
            if (!param_5) {
              local_70._0_4_ = local_70._0_4_ & 0xffffff00;
              local_70.Name.ComparisonIndex.Value = 0;
              local_70.Name.Number = 0;
              if (((local_60[0].AllocatorInstance.Data <= &local_70) &&
                  (&local_70 <
                   (FRigElementKey *)
                   (local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayMax * 0xc))) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar8 = local_60[0].ArrayNum;
              if (local_60[0].ArrayNum == local_60[0].ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&local_60[0].AllocatorInstance,&local_60[0].ArrayMax);
              }
              local_60[0].ArrayNum = iVar8 + 1;
              *(ulonglong *)(local_60[0].AllocatorInstance.Data + (longlong)iVar8 * 0xc) =
                   CONCAT44(local_70.Name.ComparisonIndex.Value,local_70._0_4_);
              pFVar11 = local_60[0].AllocatorInstance.Data + (longlong)iVar8 * 0xc;
              uVar6 = local_70.Name.Number;
              goto LAB_14a569bf6;
            }
          }
          else if (param_6) {
            if (((local_60[0].AllocatorInstance.Data <= &local_80) &&
                (&local_80 <
                 (FRigElementKey *)
                 (local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayMax * 0xc))) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = local_60[0].ArrayNum;
            if (local_60[0].ArrayNum == local_60[0].ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_60[0].AllocatorInstance,&local_60[0].ArrayMax);
            }
            local_60[0].ArrayNum = iVar8 + 1;
            *(undefined8 *)(local_60[0].AllocatorInstance.Data + (longlong)iVar8 * 0xc) =
                 local_80._0_8_;
            pFVar11 = local_60[0].AllocatorInstance.Data + (longlong)iVar8 * 0xc;
            uVar6 = local_80.Name.Number;
LAB_14a569bf6:
            *(uint *)(pFVar11 + 8) = uVar6;
          }
          else {
            TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FRigElementKey_const_&>(local_60,&local_80);
          }
          iVar8 = param_2->ArrayNum;
          uVar12 = (ulonglong)(uVar7 + 1);
          uVar14 = uVar14 + 0xc;
        } while ((int)(uVar7 + 1) < iVar8);
      }
      local_88[0] = uVar5;
      TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
      ::Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&>
                ((TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
                  *)&param_1->Hierarchy->KeyCollectionCache,local_88,
                 (FRigElementKeyCollection *)local_60);
    }
    else {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(local_60,pTVar10);
    }
    _Src.Data = local_60[0].AllocatorInstance.Data;
    if (param_7 != local_60) {
      iVar8 = local_60[0].ArrayNum;
      lVar13 = (longlong)local_60[0].ArrayNum;
      piVar1 = &param_7->ArrayMax;
      param_7->ArrayNum = local_60[0].ArrayNum;
      if ((local_60[0].ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_60[0].ArrayNum,*piVar1,&param_7->AllocatorInstance,
                   local_60[0].ArrayNum,piVar1);
        if (iVar8 != 0) {
          memcpy((param_7->AllocatorInstance).Data,_Src.Data,lVar13 * 0xc);
        }
      }
    }
    if ((FRigElementKey *)local_60[0].AllocatorInstance.Data != (FRigElementKey *)0x0) {
      FMemory::Free(local_60[0].AllocatorInstance.Data);
    }
  }
  return;
}

