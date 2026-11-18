// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b591870

UClass * __cdecl UDS_SkillLinkTextDecoratorObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillLinkTextDecoratorObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillLinkTextDecoratorObject",
               &Z_Registration_Info_UClass_UDS_SkillLinkTextDecoratorObject.InnerSingleton,
               StaticRegisterNativesUDS_SkillLinkTextDecoratorObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SkillLinkTextDecoratorObject>,
               InternalVTableHelperCtorCaller<UDS_SkillLinkTextDecoratorObject>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillLinkTextDecoratorObject.InnerSingleton;
}

// UDS_SkillLinkTextDecoratorObject @ 14b5947a0

UDS_SkillLinkTextDecoratorObject * __thiscall
UDS_SkillLinkTextDecoratorObject::UDS_SkillLinkTextDecoratorObject
          (UDS_SkillLinkTextDecoratorObject *this,FVTableHelper *param_1)

{
  URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillLinkTextDecoratorObject__6B_;
  (this->LinkSkillData).field0_0x0.DebugPtr = (UDS_SkillData *)0x0;
  return this;
}

// UDS_SkillLinkTextDecoratorObject @ 14b5947d0

UDS_SkillLinkTextDecoratorObject * __thiscall
UDS_SkillLinkTextDecoratorObject::UDS_SkillLinkTextDecoratorObject
          (UDS_SkillLinkTextDecoratorObject *this,FObjectInitializer *param_1)

{
  URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillLinkTextDecoratorObject__6B_;
  (this->LinkSkillData).field0_0x0.DebugPtr = (UDS_SkillData *)0x0;
  return this;
}

// ~UDS_SkillLinkTextDecoratorObject @ 14b5953f0

void __thiscall
UDS_SkillLinkTextDecoratorObject::~UDS_SkillLinkTextDecoratorObject
          (UDS_SkillLinkTextDecoratorObject *this)

{
  this->_padding_ = (longlong)&___7UDS_SkillLinkTextDecoratorObject__6B_;
  URichTextBlockDecorator::~URichTextBlockDecorator((URichTextBlockDecorator *)this);
  return;
}

// CreateDecorator @ 14b5962b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TSharedPtr<ITextDecorator,1> * __thiscall
UDS_SkillLinkTextDecoratorObject::CreateDecorator
          (UDS_SkillLinkTextDecoratorObject *this,
          TSharedPtr<ITextDecorator,1> *__return_storage_ptr__,URichTextBlock *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDS_SkillData *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TSharedRef<FDS_SkillLinkTextDecorator,1> *pTVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  FDestructionSentinel local_f0;
  FDelegateAllocation *local_d8;
  TSharedRef<FDS_SkillLinkTextDecorator,1> local_d0;
  URichTextBlock *local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_c0 = param_1;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UDS_SkillData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar3);
  local_b8._8_8_ = pUVar2;
  pUVar4 = (UDS_SkillData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->LinkSkillData).field0_0x0.DebugPtr = pUVar4;
  local_108 = (undefined1  [8])0x0;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_f0);
  local_d8 = &local_100;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_100);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy__PEAVURichTextBlock__U__TObjectPtr_VUDS_SkillData______6B_
    ;
    puVar5[1] = param_1;
    pUVar4 = (this->LinkSkillData).field0_0x0.DebugPtr;
    puVar5[2] = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[3] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SkillLinkTextDecoratorObject____A6AXAEBVFString___ZUFDefaultDelegateUserPolicy__PEAVURichTextBlock__U__TObjectPtr_VUDS_SkillData______6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[4] = 0;
    local_d0.Object = (FDS_SkillLinkTextDecorator *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 4),(FObjectPtr)&local_d0);
    puVar5[5] = OnClick;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  pTVar7 = MakeShared<FDS_SkillLinkTextDecorator,1,URichTextBlock_*_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_&>
                     (&local_d0,&local_c0,
                      (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
                      local_108);
  __return_storage_ptr__->Object = (ITextDecorator *)pTVar7->Object;
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_f0);
  if ((local_100.DelegateSize != 0) &&
     (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_100,0,0,0x10);
    local_100.DelegateSize = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b596df0

UClass * __cdecl UDS_SkillLinkTextDecoratorObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillLinkTextDecoratorObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillLinkTextDecoratorObject",
               &Z_Registration_Info_UClass_UDS_SkillLinkTextDecoratorObject.InnerSingleton,
               StaticRegisterNativesUDS_SkillLinkTextDecoratorObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SkillLinkTextDecoratorObject>,
               InternalVTableHelperCtorCaller<UDS_SkillLinkTextDecoratorObject>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillLinkTextDecoratorObject.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillLinkTextDecoratorObject @ 14b597880

void __cdecl
UDS_SkillLinkTextDecoratorObject::StaticRegisterNativesUDS_SkillLinkTextDecoratorObject(void)

{
  return;
}

// OnClick @ 14bd72190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SkillLinkTextDecoratorObject::OnClick
          (UDS_SkillLinkTextDecoratorObject *this,FString *param_1,URichTextBlock *param_2,
          TObjectPtr<UDS_SkillData> param_3)

{
  UObject *pUVar1;
  UDS_LogManager *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FString *pFVar5;
  undefined1 auStackY_1b8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_188;
  FString local_180;
  ChatLink local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_2 == (URichTextBlock *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SkillLinkTextDecoratorObject::OnClick",0x29,Yes);
    pwVar7 = L"InOwner == nullptr";
    uVar6 = 0xf;
  }
  else if (*(longlong *)param_3.field0_0x0 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SkillLinkTextDecoratorObject::OnClick",0x29,Yes);
    pwVar7 = L"InLinkSkillData == nullptr";
    uVar6 = 0x15;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar3);
    if (pUVar4 != (UObject *)0x0) {
      chat_link::ChatLink::ChatLink(&local_170,(Arena *)0x0);
      local_170._padding_ = (longlong)&___7ChatLink_chat_link__6B_;
      pFVar5 = ::FString::FString(&local_180,param_1);
      DS_ChatHelper::MakeChatLinkMessage(pFVar5,&local_170);
      if (local_170._impl_._oneof_case_[0] == 5) {
        UDS_SkillData::InitSkillData
                  (*(UDS_SkillData **)param_3.field0_0x0,
                   *(int *)&local_170._impl_.items_.player_[2].field_0xc,
                   *(int *)&local_170._impl_.items_.player_[3].field_0x8);
        pUVar1 = *(UObject **)param_3.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar1 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar1);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar1);
          }
        }
        local_188.ObjectIndex = 0;
        local_188.ObjectSerialNumber = 0;
        local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_180);
        UDS_VM_W_SkillDetailPopup::OpenPopup
                  (pUVar4,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_188);
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_SkillLinkTextDecoratorObject::OnClick",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_148.Ptr,0x25,L"chatLink.has_character_skill() == false")
          ;
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      chat_link::ChatLink::~ChatLink(&local_170);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SkillLinkTextDecoratorObject::OnClick",0x29,Yes);
    pwVar7 = L"userWidget == nullptr";
    uVar6 = 0x1c;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

