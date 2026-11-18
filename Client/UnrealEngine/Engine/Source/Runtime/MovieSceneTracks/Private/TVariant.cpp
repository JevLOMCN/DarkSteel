// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// Get<unsigned_short> @ 1465d2370

ushort * __thiscall
TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<unsigned_short>
          (TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> *this)

{
  code *pcVar1;
  bool bVar2;
  ushort *puVar3;
  
  if (this->TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (ushort *)(*pcVar1)();
      return puVar3;
    }
  }
  return (ushort *)this;
}

// Get<UE::MovieScene::FCustomPropertyAccessor_const_*> @ 1465d23c0

FCustomPropertyAccessor ** __thiscall
TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>
          (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FCustomPropertyAccessor **ppFVar3;
  
  if (this->TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar3 = (FCustomPropertyAccessor **)(*pcVar1)();
      return ppFVar3;
    }
  }
  return (FCustomPropertyAccessor **)this;
}

// Get<UE::MovieScene::FCustomPropertyIndex> @ 1465d2410

FCustomPropertyIndex * __thiscall
TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
Get<UE::MovieScene::FCustomPropertyIndex>
          (TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> *this)

{
  code *pcVar1;
  bool bVar2;
  FCustomPropertyIndex *pFVar3;
  
  if (this->TypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCustomPropertyIndex *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FCustomPropertyIndex *)this;
}

// Get<FName> @ 1465d2460

FName * __thiscall
TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
          (TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if (this->TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FName *)this;
}

// Set<TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 14660ac00

void __thiscall
TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
::Set<TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *this,TSharedPtr<FTrackInstancePropertyBindings,1> *param_1)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = this->TypeIndex;
  if (2 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  this->_padding_ = (longlong)param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->TypeIndex = '\x02';
  return;
}

// TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> @ 14660eb30

TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> * __thiscall
TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>
          (TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> *this,
          TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 14660ebb0

TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
* __thiscall
TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
::
TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *this,TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// operator= @ 146622200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
* __thiscall
TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
::operator=(TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            *this,TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != this) {
    bVar2 = param_1->TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar2);
    if (2 < (ulonglong)bVar2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar2])(&local_38,param_1);
    uVar1 = *(ulonglong *)&this->TypeIndex;
    lVar4 = this->_padding_;
    lVar5 = this->_padding_;
    this->_padding_ = local_38;
    this->_padding_ = lStack_30;
    *(ulonglong *)&this->TypeIndex = local_28;
    local_38 = lVar4;
    lStack_30 = lVar5;
    local_28 = uVar1;
    if (2 < (uVar1 & 0xff)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar1 & 0xff])(&local_38);
  }
  return this;
}

// Get<TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 1467ec0c0

TSharedPtr<FTrackInstancePropertyBindings,1> * __thiscall
TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>
::Get<TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar3;
  
  if (this->TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TSharedPtr<FTrackInstancePropertyBindings,1> *)this;
}

