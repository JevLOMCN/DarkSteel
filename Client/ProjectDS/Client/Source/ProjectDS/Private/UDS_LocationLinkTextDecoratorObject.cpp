// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4dbf10

UClass * __cdecl UDS_LocationLinkTextDecoratorObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LocationLinkTextDecoratorObject.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LocationLinkTextDecoratorObject",
               &Z_Registration_Info_UClass_UDS_LocationLinkTextDecoratorObject.InnerSingleton,
               StaticRegisterNativesUDS_LocationLinkTextDecoratorObject,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LocationLinkTextDecoratorObject>,
               InternalVTableHelperCtorCaller<UDS_LocationLinkTextDecoratorObject>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LocationLinkTextDecoratorObject.InnerSingleton;
}

// UDS_LocationLinkTextDecoratorObject @ 14b4dffd0

UDS_LocationLinkTextDecoratorObject * __thiscall
UDS_LocationLinkTextDecoratorObject::UDS_LocationLinkTextDecoratorObject
          (UDS_LocationLinkTextDecoratorObject *this,FVTableHelper *param_1)

{
  URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)this,param_1);
  *(undefined ***)this = &___7UDS_LocationLinkTextDecoratorObject__6B_;
  return this;
}

// UDS_LocationLinkTextDecoratorObject @ 14b4e0000

UDS_LocationLinkTextDecoratorObject * __thiscall
UDS_LocationLinkTextDecoratorObject::UDS_LocationLinkTextDecoratorObject
          (UDS_LocationLinkTextDecoratorObject *this,FObjectInitializer *param_1)

{
  URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)this,param_1);
  *(undefined ***)this = &___7UDS_LocationLinkTextDecoratorObject__6B_;
  return this;
}

// ~UDS_LocationLinkTextDecoratorObject @ 14b4e0530

void __thiscall
UDS_LocationLinkTextDecoratorObject::~UDS_LocationLinkTextDecoratorObject
          (UDS_LocationLinkTextDecoratorObject *this)

{
  *(undefined ***)this = &___7UDS_LocationLinkTextDecoratorObject__6B_;
  URichTextBlockDecorator::~URichTextBlockDecorator((URichTextBlockDecorator *)this);
  return;
}

// CreateDecorator @ 14b4e1250

TSharedPtr<ITextDecorator,1> * __thiscall
UDS_LocationLinkTextDecoratorObject::CreateDecorator
          (UDS_LocationLinkTextDecoratorObject *this,
          TSharedPtr<ITextDecorator,1> *__return_storage_ptr__,URichTextBlock *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TSharedRef<FDS_LocationLinkTextDecorator,1> *pTVar4;
  UDS_LocationLinkTextDecoratorObject *local_res10;
  URichTextBlock *local_res18 [2];
  TSharedRef<FDS_LocationLinkTextDecorator,1> local_78;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_LocationLinkTextDecoratorObject____A6AXAEBVFString___ZUFDefaultDelegateUserPolicy__PEAVURichTextBlock____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_LocationLinkTextDecoratorObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_LocationLinkTextDecoratorObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
    puVar2[4] = OnClick;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar4 = MakeShared<FDS_LocationLinkTextDecorator,1,URichTextBlock_*_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_&>
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

// GetPrivateStaticClass @ 14b4e2430

UClass * __cdecl UDS_LocationLinkTextDecoratorObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LocationLinkTextDecoratorObject.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LocationLinkTextDecoratorObject",
               &Z_Registration_Info_UClass_UDS_LocationLinkTextDecoratorObject.InnerSingleton,
               StaticRegisterNativesUDS_LocationLinkTextDecoratorObject,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LocationLinkTextDecoratorObject>,
               InternalVTableHelperCtorCaller<UDS_LocationLinkTextDecoratorObject>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LocationLinkTextDecoratorObject.InnerSingleton;
}

// StaticRegisterNativesUDS_LocationLinkTextDecoratorObject @ 14b4e2910

void __cdecl
UDS_LocationLinkTextDecoratorObject::StaticRegisterNativesUDS_LocationLinkTextDecoratorObject(void)

{
  return;
}

// OnClick @ 14bd719d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LocationLinkTextDecoratorObject::OnClick
          (UDS_LocationLinkTextDecoratorObject *this,FString *param_1,URichTextBlock *param_2)

{
  UDS_LogManager *pUVar1;
  UDS_WorldMapMarkerManager *this_00;
  FString *pFVar2;
  undefined1 auStackY_198 [32];
  uint uVar3;
  wchar_t *pwVar4;
  ChatLink local_168;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_2 == (URichTextBlock *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_LocationLinkTextDecoratorObject::OnClick",0x2c,Yes);
    pwVar4 = L"InOwner == nullptr";
    uVar3 = 0xe;
  }
  else {
    this_00 = UDS_WorldMapMarkerManager::GetInst();
    if (this_00 != (UDS_WorldMapMarkerManager *)0x0) {
      chat_link::ChatLink::ChatLink(&local_168,(Arena *)0x0);
      local_168._padding_ = (longlong)&___7ChatLink_chat_link__6B_;
      pFVar2 = ::FString::FString(&local_148,param_1);
      DS_ChatHelper::MakeChatLinkMessage(pFVar2,&local_168);
      if (local_168._impl_._oneof_case_[0] == 9) {
        UDS_WorldMapMarkerManager::AddChatLocationLink
                  (this_00,(ChatLocation *)local_168._impl_.items_.player_);
      }
      else {
        pUVar1 = UDS_LogManager::GetInst();
        if (pUVar1 != (UDS_LogManager *)0x0) {
          pUVar1 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_LocationLinkTextDecoratorObject::OnClick",0x2c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar1,1,Warning,local_138.Ptr,0x1e,L"chatLink.has_location() == false");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      chat_link::ChatLink::~ChatLink(&local_168);
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_LocationLinkTextDecoratorObject::OnClick",0x2c,Yes);
    pwVar4 = L"worldMapMarkerManager == nullptr";
    uVar3 = 0x15;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

