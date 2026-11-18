// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4a4230

UClass * __cdecl UDS_GroupChatLinkTextDecoratorObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GroupChatLinkTextDecoratorObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GroupChatLinkTextDecoratorObject",
               &Z_Registration_Info_UClass_UDS_GroupChatLinkTextDecoratorObject.InnerSingleton,
               StaticRegisterNativesUDS_GroupChatLinkTextDecoratorObject,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_GroupChatLinkTextDecoratorObject>,
               InternalVTableHelperCtorCaller<UDS_GroupChatLinkTextDecoratorObject>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GroupChatLinkTextDecoratorObject.InnerSingleton;
}

// UDS_GroupChatLinkTextDecoratorObject @ 14b4a71d0

UDS_GroupChatLinkTextDecoratorObject * __thiscall
UDS_GroupChatLinkTextDecoratorObject::UDS_GroupChatLinkTextDecoratorObject
          (UDS_GroupChatLinkTextDecoratorObject *this,FVTableHelper *param_1)

{
  URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)this,param_1);
  *(undefined ***)this = &___7UDS_GroupChatLinkTextDecoratorObject__6B_;
  return this;
}

// UDS_GroupChatLinkTextDecoratorObject @ 14b4a7200

UDS_GroupChatLinkTextDecoratorObject * __thiscall
UDS_GroupChatLinkTextDecoratorObject::UDS_GroupChatLinkTextDecoratorObject
          (UDS_GroupChatLinkTextDecoratorObject *this,FObjectInitializer *param_1)

{
  URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)this,param_1);
  *(undefined ***)this = &___7UDS_GroupChatLinkTextDecoratorObject__6B_;
  return this;
}

// ~UDS_GroupChatLinkTextDecoratorObject @ 14b4a78f0

void __thiscall
UDS_GroupChatLinkTextDecoratorObject::~UDS_GroupChatLinkTextDecoratorObject
          (UDS_GroupChatLinkTextDecoratorObject *this)

{
  *(undefined ***)this = &___7UDS_GroupChatLinkTextDecoratorObject__6B_;
  URichTextBlockDecorator::~URichTextBlockDecorator((URichTextBlockDecorator *)this);
  return;
}

// CreateDecorator @ 14b4a8480

TSharedPtr<ITextDecorator,1> * __thiscall
UDS_GroupChatLinkTextDecoratorObject::CreateDecorator
          (UDS_GroupChatLinkTextDecoratorObject *this,
          TSharedPtr<ITextDecorator,1> *__return_storage_ptr__,URichTextBlock *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TSharedRef<FDS_GroupChatLinkTextDecorator,1> *pTVar4;
  UDS_GroupChatLinkTextDecoratorObject *local_res10;
  URichTextBlock *local_res18 [2];
  TSharedRef<FDS_GroupChatLinkTextDecorator,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  local_res18[0] = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy__PEAVURichTextBlock____6B_
    ;
    puVar2[1] = param_1;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GroupChatLinkTextDecoratorObject____A6AXAEBVFString___ZUFDefaultDelegateUserPolicy__PEAVURichTextBlock____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_GroupChatLinkTextDecoratorObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_GroupChatLinkTextDecoratorObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
    puVar2[4] = OnClick;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar4 = MakeShared<FDS_GroupChatLinkTextDecorator,1,URichTextBlock_*_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_&>
                     (&local_78,local_res18,
                      (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
                      local_68);
  __return_storage_ptr__->Object = (ITextDecorator *)pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b4a8e30

UClass * __cdecl UDS_GroupChatLinkTextDecoratorObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GroupChatLinkTextDecoratorObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GroupChatLinkTextDecoratorObject",
               &Z_Registration_Info_UClass_UDS_GroupChatLinkTextDecoratorObject.InnerSingleton,
               StaticRegisterNativesUDS_GroupChatLinkTextDecoratorObject,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_GroupChatLinkTextDecoratorObject>,
               InternalVTableHelperCtorCaller<UDS_GroupChatLinkTextDecoratorObject>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GroupChatLinkTextDecoratorObject.InnerSingleton;
}

// StaticRegisterNativesUDS_GroupChatLinkTextDecoratorObject @ 14b4a95c0

void __cdecl
UDS_GroupChatLinkTextDecoratorObject::StaticRegisterNativesUDS_GroupChatLinkTextDecoratorObject
          (void)

{
  return;
}

// OnClick @ 14bd713c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_GroupChatLinkTextDecoratorObject::OnClick
          (UDS_GroupChatLinkTextDecoratorObject *this,FString *param_1,URichTextBlock *param_2)

{
  UDS_LogManager *pUVar1;
  UDS_ChattingManager *pUVar2;
  FString *pFVar3;
  char *pcVar4;
  undefined1 auStackY_1a8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FString local_178;
  ChatLink local_168;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_2 == (URichTextBlock *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GroupChatLinkTextDecoratorObject::OnClick",0x2d,Yes);
    pwVar6 = L"InOwner == nullptr";
    uVar5 = 0xf;
LAB_14bd7143a:
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar5,pwVar6);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    return;
  }
  pUVar2 = UDS_ChattingManager::GetInst();
  if (pUVar2 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GroupChatLinkTextDecoratorObject::OnClick",0x2d,Yes);
    pwVar6 = L"chattingManager == nullptr";
    uVar5 = 0x16;
    goto LAB_14bd7143a;
  }
  chat_link::ChatLink::ChatLink(&local_168,(Arena *)0x0);
  local_168._padding_ = (longlong)&___7ChatLink_chat_link__6B_;
  pFVar3 = ::FString::FString(&local_148,param_1);
  DS_ChatHelper::MakeChatLinkMessage(pFVar3,&local_168);
  if (local_168._impl_._oneof_case_[0] == 7) {
    pcVar4 = (char *)(*(ulonglong *)&local_168._impl_.items_.player_[1].field_0x8 &
                     0xfffffffffffffffc);
    if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
      pcVar4 = *(char **)pcVar4;
    }
    DS_Util::ConvertUTF8ToFString(&local_178,pcVar4);
    UDS_ChatUIPopupHelper::OpenGroupJoinPopup(&local_178);
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14bd715bd;
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GroupChatLinkTextDecoratorObject::OnClick",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x1f,L"chatLink.has_group() == false");
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
LAB_14bd715bd:
  chat_link::ChatLink::~ChatLink(&local_168);
  return;
}

