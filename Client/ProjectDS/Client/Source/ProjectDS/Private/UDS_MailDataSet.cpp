// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4e5e20

UClass * __cdecl UDS_MailDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailDataSet",
               &Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton,
               StaticRegisterNativesUDS_MailDataSet,0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_MailDataSet>,InternalVTableHelperCtorCaller<UDS_MailDataSet>
               ,local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton;
}

// UDS_MailDataSet @ 14b4e89b0

UDS_MailDataSet * __thiscall
UDS_MailDataSet::UDS_MailDataSet(UDS_MailDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MailDataSet__6B_;
  *(undefined8 *)&this->MailDataMap = 0;
  *(undefined8 *)&(this->MailDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->MailDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->MailDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MailDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MailDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->MailDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MailDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MailDataMap).field_0x48 = 0;
  (this->SelectedMailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedMailUID).Data.ArrayNum = 0;
  (this->SelectedMailUID).Data.ArrayMax = 0;
  this->MailCategory = System;
  return this;
}

// UDS_MailDataSet @ 14b4e8a30

UDS_MailDataSet * __thiscall
UDS_MailDataSet::UDS_MailDataSet(UDS_MailDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MailDataSet__6B_;
  *(undefined8 *)&this->MailDataMap = 0;
  *(undefined8 *)&(this->MailDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->MailDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->MailDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MailDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MailDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->MailDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MailDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MailDataMap).field_0x48 = 0;
  (this->SelectedMailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedMailUID).Data.ArrayNum = 0;
  (this->SelectedMailUID).Data.ArrayMax = 0;
  this->MailCategory = System;
  return this;
}

// ~UDS_MailDataSet @ 14b4e9a30

void __thiscall UDS_MailDataSet::~UDS_MailDataSet(UDS_MailDataSet *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_MailDataSet__6B_;
  pFVar1 = (this->SelectedMailUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MailDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MailDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MailDataMap);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb5d0

UClass * __cdecl UDS_MailDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailDataSet",
               &Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton,
               StaticRegisterNativesUDS_MailDataSet,0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_MailDataSet>,InternalVTableHelperCtorCaller<UDS_MailDataSet>
               ,local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_MailDataSet @ 14b4ec150

void __cdecl UDS_MailDataSet::StaticRegisterNativesUDS_MailDataSet(void)

{
  return;
}

// AddMailData @ 14ba358c0

void __thiscall UDS_MailDataSet::AddMailData(UDS_MailDataSet *this,TObjectPtr<UDS_MailData> param_1)

{
  void *_Src;
  ulong64 uVar1;
  longlong lVar2;
  UObject *local_res10;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  ForAnyElementType *local_18;
  TObjectPtr<UDS_MailData>_u_0 local_10;
  
  local_res10 = *(UObject **)param_1.field0_0x0;
  if (local_res10 != (UObject *)0x0) {
    uVar1 = mailDataIndex + 1;
    mailDataIndex = uVar1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(local_res10);
    }
    UDS_DataSetBase::AddData((UDS_DataSetBase *)this,uVar1,(TObjectPtr<UDS_DataBase>)&local_res10);
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = *(int *)(*(longlong *)param_1.field0_0x0 + 0x60);
    lVar2 = (longlong)local_20;
    _Src = *(void **)(*(longlong *)param_1.field0_0x0 + 0x58);
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar2 * 2);
    }
    if (1 < local_20) {
      local_18 = &local_28;
      local_10 = param_1.field0_0x0;
      TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&,TObjectPtr<UDS_MailData>_&>_>
                ((TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&this->MailDataMap,
                 (TPairInitializer<FString_&,TObjectPtr<UDS_MailData>_&> *)&local_res10,
                 (bool *)&local_18);
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// GetMailData @ 14ba4c9f0

TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> __thiscall
UDS_MailDataSet::GetMailData(UDS_MailDataSet *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FString *in_R8;
  undefined8 local_res8;
  
  iVar2 = (in_R8->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(in_R8->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar6);
  iVar2 = TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)&this->MailDataMap,uVar1,in_R8);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->MailDataMap).field_0x0;
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar5;
      return (TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetMailDataList @ 14ba4caa0

void __thiscall
UDS_MailDataSet::GetMailDataList
          (UDS_MailDataSet *this,
          TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FObjectPtr_u_0 *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 FVar6;
  FObjectPtr_u_0 FVar7;
  int iVar8;
  longlong lVar9;
  FObjectPtr_u_0 FVar10;
  FWeakObjectPtr local_res8;
  FObjectPtr_u_0 local_res10;
  
  piVar1 = &param_1->ArrayMax;
  FVar10.Handle = (UObject *)0x0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  lVar9 = (longlong)(int)this->_padding_;
  FVar7.Handle = FVar10.Handle;
  FVar6.Handle = FVar10.Handle;
  if (0 < lVar9) {
    do {
      iVar8 = FVar6._0_4_;
      if ((-1 < iVar8) && (iVar8 < (int)this->_padding_)) {
        if ((iVar8 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FObjectPtr_u_0 *)(this->_padding_ + (longlong)FVar7.Handle * 8);
        FVar6.Handle = FVar10.Handle;
        if (*(longlong *)(this->_padding_ + (longlong)FVar7.Handle * 8) != 0) {
          pUVar5 = Z_Construct_UClass_UDS_MailData_NoRegister();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
          if (bVar3) {
            FVar6.Handle = this_00->Handle;
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.Handle != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(FVar6.Handle);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = FVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.Handle != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(FVar6.Handle);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        bVar3 = TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
        if (!bVar3) {
          iVar4 = param_1->ArrayNum;
          if (iVar4 == *piVar1) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar4 + 1;
          *(FWeakObjectPtr *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_res8;
        }
      }
      FVar6._0_4_ = iVar8 + 1;
      FVar6._4_4_ = 0;
      FVar7.Handle = (UObject *)&(FVar7.Handle)->field_0x1;
    } while ((longlong)FVar7.Handle < lVar9);
  }
  return;
}

// GetRewardMailCount @ 14ba4eaf0

int __thiscall UDS_MailDataSet::GetRewardMailCount(UDS_MailDataSet *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FObjectPtr_u_0 *this_00;
  UObject *pUVar7;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  pUVar7 = (UObject *)0x0;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  pUVar6 = pUVar7;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (this_00 == pFVar1) break;
    pUVar5 = pUVar7;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_MailData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if (bVar3) {
        pUVar5 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (((bVar3) && (pUVar5 = FWeakObjectPtr::Get(&local_res10), pUVar5[4].field_0x12 != '\0')) &&
       (pUVar5 = FWeakObjectPtr::Get(&local_res10), pUVar5[4].field_0x11 == '\0')) {
      pUVar6 = (UObject *)(ulonglong)((int)pUVar6 + 1);
    }
    this_00 = this_00 + 1;
  }
  return (int)pUVar6;
}

// GetSortedMailList @ 14ba4fb60

TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MailDataSet::GetSortedMailList
          (UDS_MailDataSet *this,
          TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType this_00;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_58 [3];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  GetMailDataList(this,local_58);
  dVar4 = __real_3e7ad7f29abcaf48;
  iVar5 = local_58[0].ArrayNum;
  uVar10 = (ulonglong)local_58[0].ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_58[0].AllocatorInstance.Data + uVar10 * 8);
  this_00.Data = local_58[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar5) {
      local_res10[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if ((FWeakObjectPtr *)this_00.Data == pFVar1) break;
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00.Data);
    if (bVar6) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
      if (0.0 < (double)(*(longlong *)(pUVar8 + 4) - local_res20) * dVar4) {
        pFVar2 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar2 <= this_00.Data) && (this_00.Data < pFVar2 + __return_storage_ptr__->ArrayMax))
        {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar9;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8)
             = *(FWeakObjectPtr *)this_00.Data;
      }
    }
    uVar10 = local_58[0]._8_8_ & 0xffffffff;
    this_00.Data = this_00.Data + 8;
  }
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,int,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,_UDS_MailDataSet::GetSortedMailList_::__l2::<lambda_1>_>_>
            ((TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> *)
             (__return_storage_ptr__->AllocatorInstance).Data,__return_storage_ptr__->ArrayNum,
             local_res10[0],(<lambda_1> *)local_res18);
  if ((FWeakObjectPtr *)local_58[0].AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUnreadMailCount @ 14ba512a0

int __thiscall UDS_MailDataSet::GetUnreadMailCount(UDS_MailDataSet *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FObjectPtr_u_0 *this_00;
  UObject *pUVar7;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  pUVar7 = (UObject *)0x0;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  pUVar6 = pUVar7;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (this_00 == pFVar1) break;
    pUVar5 = pUVar7;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_MailData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if (bVar3) {
        pUVar5 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if ((bVar3) && (pUVar5 = FWeakObjectPtr::Get(&local_res10), pUVar5[4].field_0x10 == '\0')) {
      pUVar6 = (UObject *)(ulonglong)((int)pUVar6 + 1);
    }
    this_00 = this_00 + 1;
  }
  return (int)pUVar6;
}

// HasRewardMail @ 14ba51bf0

bool __thiscall UDS_MailDataSet::HasRewardMail(UDS_MailDataSet *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (this_00 == pFVar1) {
      return false;
    }
    pUVar5 = (UObject *)0x0;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_MailData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if (bVar3) {
        pUVar5 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (((bVar3) && (pUVar5 = FWeakObjectPtr::Get(&local_res10), pUVar5[4].field_0x12 != '\0')) &&
       (pUVar5 = FWeakObjectPtr::Get(&local_res10), pUVar5[4].field_0x11 == '\0')) break;
    this_00 = this_00 + 1;
  }
  return true;
}

// HasUnreadMail @ 14ba52310

bool __thiscall UDS_MailDataSet::HasUnreadMail(UDS_MailDataSet *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (this_00 == pFVar1) {
      return false;
    }
    pUVar5 = (UObject *)0x0;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_MailData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if (bVar3) {
        pUVar5 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if ((bVar3) && (pUVar5 = FWeakObjectPtr::Get(&local_res10), pUVar5[4].field_0x10 == '\0'))
    break;
    this_00 = this_00 + 1;
  }
  return true;
}

// RemoveMailData @ 14ba668b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_MailDataSet::RemoveMailData(UDS_MailDataSet *this,FString *param_1)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FWeakObjectPtr *pFVar6;
  UObject *pUVar7;
  UDS_LogManager *pUVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_178;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar5 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
  iVar5 = TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)&this->MailDataMap,uVar4,param_1);
  if (iVar5 == -1) {
    return false;
  }
  pFVar6 = &TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
            ::FindChecked((TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
                           *)&this->MailDataMap,param_1)->WeakPtr;
  local_178 = *pFVar6;
  bVar3 = FWeakObjectPtr::IsValid(&local_178);
  if (!bVar3) {
    TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
    ::Remove((TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
              *)&this->MailDataMap,param_1);
    return false;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_178);
  uVar2 = *(ulong64 *)&pUVar7[1].field_0x18;
  TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
  ::Remove((TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
            *)&this->MailDataMap,param_1);
  bVar3 = UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,uVar2);
  if ((!bVar3) && (pUVar8 = UDS_LogManager::GetInst(), pUVar8 != (UDS_LogManager *)0x0)) {
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MailDataSet::RemoveMailData",0x1f,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Display,local_158.Ptr,0x104,L"Failed to remove data with key: %llu");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  iVar5 = (param_1->Data).ArrayNum;
  iVar1 = (this->SelectedMailUID).Data.ArrayNum;
  if (iVar5 == iVar1) {
    if (1 < iVar5) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(this->SelectedMailUID).Data.AllocatorInstance.Data);
      bVar10 = iVar5 == 0;
      goto LAB_14ba66a38;
    }
  }
  else {
    bVar10 = iVar5 + iVar1 == 1;
LAB_14ba66a38:
    if (!bVar10) goto LAB_14ba66a69;
  }
  local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Data.ArrayNum = 0;
  local_170.Data.ArrayMax = 0;
  ::FString::operator=(&this->SelectedMailUID,&local_170);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
LAB_14ba66a69:
  *(undefined1 *)&this->_padding_ = 1;
  bVar10 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                      (void *)0x0);
  if (!bVar10) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar7[3].field_0x20 = 1;
    return bVar3;
  }
  return bVar3;
}

// RemoveReadMails @ 14ba66fa0

void __thiscall UDS_MailDataSet::RemoveReadMails(UDS_MailDataSet *this)

{
  undefined1 *puVar1;
  TMap<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
  *pTVar2;
  FString *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  TMap<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  char cVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FWeakObjectPtr local_c8;
  TMap<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined8 local_60 [4];
  
  puVar1 = &(this->MailDataMap).field_0x10;
  local_d8.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->MailDataMap;
  local_d0 = 0;
  iVar10 = *(int *)&(this->MailDataMap).field_0x28;
  iStack_b8 = 0;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = iStack_b8;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&(this->MailDataMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    local_a0 = 0;
    iStack_b8 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14ba6704d;
      uVar17 = puVar19[lVar13 + 1];
    }
    uStack_b4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_b4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iStack_a4 = local_a0 + -1 + local_res18;
    if (iVar10 < iStack_a4) {
      iStack_a4 = iVar10;
    }
  }
LAB_14ba6704d:
  uVar17 = *(uint *)&(this->MailDataMap).field_0x28;
  uVar20 = uVar17 & 0xffffffe0;
  iStack_98 = *(int *)&(this->MailDataMap).field_0x8 - *(int *)&(this->MailDataMap).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_88._28_4_ = iStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = pTVar2;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar10 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->MailDataMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar18 = *(undefined1 **)&(this->MailDataMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ba67150;
      uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    uVar17 = local_res20 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14ba67150:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar17) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pFVar15 = (FScriptContainerElement *)
              (*(longlong *)pTVar8 + (longlong)TStack_88.CurrentBitIndex * 0x20);
    local_c8 = *(FWeakObjectPtr *)(pFVar15 + 0x10);
    bVar9 = FWeakObjectPtr::IsValid(&local_c8);
    if (bVar9) {
      pUVar11 = FWeakObjectPtr::Get(&local_c8);
      if (pUVar11[4].field_0x12 == '\0') {
        pUVar11 = FWeakObjectPtr::Get(&local_c8);
        cVar12 = pUVar11[4].field_0x10;
      }
      else {
        pUVar11 = FWeakObjectPtr::Get(&local_c8);
        cVar12 = pUVar11[4].field_0x11;
      }
      if (cVar12 != '\0') {
        if (((local_d8.Data <= pFVar15) &&
            (pFVar15 < local_d8.Data + (longlong)local_d0._4_4_ * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (int)local_d0;
        if ((int)local_d0 == local_d0._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 1);
        ::FString::FString((FString *)(local_d8.Data + (longlong)iVar10 * 0x10),(FString *)pFVar15);
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  iVar10 = (int)local_d0;
  bVar9 = false;
  pFVar15 = local_d8.Data + (longlong)(int)local_d0 * 0x10;
  FVar16.Data = local_d8.Data;
  do {
    if ((int)local_d0 != iVar10) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar16.Data == pFVar15) {
      if ((bVar9) && (pFVar3 = &this->SelectedMailUID, pFVar3 != (FString *)local_60)) {
        pFVar15 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->SelectedMailUID).Data.ArrayNum = 0;
        (this->SelectedMailUID).Data.ArrayMax = 0;
      }
      *(undefined1 *)&this->_padding_ = 1;
      bVar9 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar9) {
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar11[3].field_0x20 = 1;
      }
      DestructItems<FString,int>((FString *)local_d8.Data,(int)local_d0);
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return;
    }
    iVar14 = *(int *)(FVar16.Data + 8);
    iVar6 = (this->SelectedMailUID).Data.ArrayNum;
    if (iVar14 == iVar6) {
      if (1 < iVar14) {
        iVar14 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)FVar16.Data,
                            (wchar_t *)(this->SelectedMailUID).Data.AllocatorInstance.Data);
        bVar21 = iVar14 == 0;
        goto LAB_14ba672ee;
      }
LAB_14ba672f5:
      bVar9 = true;
    }
    else {
      bVar21 = iVar14 + iVar6 == 1;
LAB_14ba672ee:
      if (bVar21) goto LAB_14ba672f5;
    }
    RemoveMailData(this,(FString *)FVar16.Data);
    FVar16.Data = FVar16.Data + 0x10;
  } while( true );
}

// SetMailCategoryType @ 14ba71e00

void __thiscall
UDS_MailDataSet::SetMailCategoryType(UDS_MailDataSet *this,EDS_MailCategoryType param_1)

{
  this->MailCategory = param_1;
  return;
}

// SetSelectedMailUID @ 14ba74ba0

void __thiscall UDS_MailDataSet::SetSelectedMailUID(UDS_MailDataSet *this,FString *param_1)

{
  int iVar1;
  UDS_MailData *pUVar2;
  UObject *pUVar3;
  UDS_MailManager *this_00;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [16];
  
  iVar4 = (this->SelectedMailUID).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar4 == iVar1) {
    if (iVar4 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->SelectedMailUID).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar4 + iVar1 == 1;
  }
  if (!bVar5) {
    if (1 < (this->SelectedMailUID).Data.ArrayNum) {
      GetMailData(this,(FString *)(local_res8 + 8));
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_res8 + 8));
      if (bVar5) {
        pUVar2 = (UDS_MailData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_res8 + 8));
        UDS_MailData::SetIsSelected(pUVar2,false);
      }
    }
    GetMailData(this,(FString *)local_res8);
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_res8);
    if (bVar5) {
      pUVar2 = (UDS_MailData *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_res8);
      UDS_MailData::SetIsSelected(pUVar2,true);
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res8);
      if (pUVar3[4].field_0x10 == '\0') {
        this_00 = UDS_MailManager::GetInst();
        if (this_00 != (UDS_MailManager *)0x0) {
          UDS_MailManager::MailRead(this_00,param_1);
        }
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res8);
        if (pUVar3[4].field_0x10 != '\x01') {
          pUVar3[4].field_0x10 = 1;
          if (pUVar3[4].field_0x12 == '\0') {
            iVar4 = 0x386;
          }
          else {
            iVar4 = (pUVar3[4].field_0x11 != '\0') + 0x387;
          }
          *(int *)&pUVar3[4].field_0xc = iVar4;
          *(undefined1 *)(pUVar3 + 2) = 1;
          bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&pUVar3[1].field_0x20
                             ,(void *)0x0);
          if (!bVar5) {
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar3[1].field_0x20);
            pUVar3[4].field_0x8 = 1;
            bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                               (void *)0x0);
            if (!bVar5) {
              pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
              pUVar3[3].field_0x20 = 1;
            }
          }
          TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)(local_res8 + 8));
          bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_res8 + 8));
          if (bVar5) {
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_res8 + 8));
            pUVar3[4].field_0x8 = 1;
            bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                               (void *)0x0);
            if (!bVar5) {
              pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
              pUVar3[3].field_0x20 = 1;
            }
          }
        }
      }
    }
    ::FString::operator=(&this->SelectedMailUID,param_1);
    *(undefined1 *)&this->_padding_ = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar5) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar3[3].field_0x20 = 1;
    }
  }
  return;
}

// UpdateMailList @ 14ba7d9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_MailDataSet::UpdateMailList(UDS_MailDataSet *this,MailCategoryListResponse *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
  *this_00;
  int iVar3;
  ulonglong uVar4;
  SqlMailTable *pSVar5;
  FScriptContainerElement *_Src;
  RepeatedPtrField<ds_mail::SqlMailTable> *pRVar6;
  bool bVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UDS_MailData *this_01;
  longlong *plVar10;
  longlong lVar11;
  Impl_ *pIVar12;
  ulong64 uVar13;
  undefined1 auStackY_138 [32];
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TPairInitializer<FString_&,TObjectPtr<UDS_MailData>_&> local_e8;
  UDS_MailData *local_d8;
  ForAnyElementType *local_d0;
  TObjectPtr<UDS_MailData> **local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  bVar7 = 1 < (int)this->_padding_;
  if (!bVar7) {
    TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
                      *)&this->_padding_);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar3 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar7) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
              *)&this->_padding_);
  }
  this_00 = &this->MailDataMap;
  bVar7 = 1 < *(int *)&(this->MailDataMap).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->MailDataMap).field_0x8);
  puVar2 = &(this->MailDataMap).field_0xc;
  *(undefined4 *)&(this->MailDataMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->MailDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MailDataMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->MailDataMap).field_0x2c;
  *(undefined4 *)&(this->MailDataMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->MailDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MailDataMap).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->MailDataMap).field_0x48 = 1;
    TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  uVar4 = *(ulonglong *)&(param_1->_impl_).mail_list_;
  if ((uVar4 & 1) == 0) {
    pIVar12 = &param_1->_impl_;
  }
  else {
    pIVar12 = (Impl_ *)(uVar4 + 7);
  }
  iVar3 = *(int *)&(param_1->_impl_).mail_list_.field_0x8;
  pRVar6 = &pIVar12->mail_list_;
  for (; pIVar12 != (Impl_ *)(&pRVar6->field_0x0 + (longlong)iVar3 * 8);
      pIVar12 = (Impl_ *)&(pIVar12->mail_list_).field_0x8) {
    pSVar5 = *(SqlMailTable **)&pIVar12->mail_list_;
    pUVar8 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UDS_MailData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._8_8_ = pUVar8;
    this_01 = (UDS_MailData *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (this_01 != (UDS_MailData *)0x0) {
      UDS_MailData::SetMailData(this_01,pSVar5);
      local_e8.Value = (TObjectPtr<UDS_MailData> *)this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      if ((UDS_MailData *)local_e8.Value != (UDS_MailData *)0x0) {
        uVar13 = mailDataIndex + 1;
        mailDataIndex = uVar13;
        local_d8 = (UDS_MailData *)local_e8.Value;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_e8.Value);
        }
        UDS_DataSetBase::AddData((UDS_DataSetBase *)this,uVar13,(TObjectPtr<UDS_DataBase>)&local_d8)
        ;
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0 = (((FString *)((longlong)local_e8.Value + 0x58))->Data).ArrayNum;
        lVar11 = (longlong)local_f0;
        _Src = (((FString *)((longlong)local_e8.Value + 0x58))->Data).AllocatorInstance.Data;
        if (local_f0 == 0) {
          local_ec = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f0,0,&local_f8,local_f0,&local_ec);
          memcpy(local_f8.Data,_Src,lVar11 * 2);
        }
        if (1 < local_f0) {
          local_d0 = &local_f8;
          local_c8 = &local_e8.Value;
          TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&,TObjectPtr<UDS_MailData>_&>_>
                    ((TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this_00,&local_e8,(bool *)&local_d0);
        }
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
      }
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar7 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar7) {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar8[3].field_0x20 = 1;
  }
  return;
}

