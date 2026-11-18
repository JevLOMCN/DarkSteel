// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> @ 147ea3640

TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
* __thiscall
TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::
TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this,TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  return this;
}

// Get<UE::Net::FNetRefHandle> @ 14800fb30

FNetRefHandle * __thiscall
TVariant<UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::
Get<UE::Net::FNetRefHandle>
          (TVariant<UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle> *this)

{
  code *pcVar1;
  bool bVar2;
  FNetRefHandle *pFVar3;
  
  if (this->TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNetRefHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FNetRefHandle *)this;
}

// Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&> @ 14807cf30

void __thiscall
TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
          (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this,TSharedPtr<FUniqueNetId_const_,1> *param_1)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = this->TypeIndex;
  if (1 < (ulonglong)bVar1) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  this->_padding_ = (longlong)param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->TypeIndex = '\0';
  return;
}

// TVariant<float,__int64> @ 148088b50

TVariant<float,__int64> * __thiscall
TVariant<float,__int64>::TVariant<float,__int64>
          (TVariant<float,__int64> *this,TVariant<float,__int64> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<float,__int64> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<float,__int64> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<float,__int64>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  return this;
}

// ~TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> @ 14808e530

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::
~TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
    return;
  case 1:
    return;
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}

// operator= @ 14808f970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<float,__int64> * __thiscall
TVariant<float,__int64>::operator=(TVariant<float,__int64> *this,TVariant<float,__int64> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVariant<float,__int64> *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  byte bStack_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != this) {
    bStack_20 = param_1->TypeIndex;
    uVar4 = (ulonglong)bStack_20;
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVariant<float,__int64> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<float,__int64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar4])(&local_28,param_1);
    this->_padding_ = local_28;
    *(ulonglong *)&this->TypeIndex = CONCAT71(uStack_1f,bStack_20);
  }
  return this;
}

// operator= @ 14808fa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<float,__int64> * __thiscall
TVariant<float,__int64>::operator=(TVariant<float,__int64> *this,TVariant<float,__int64> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVariant<float,__int64> *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  byte bStack_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != this) {
    bStack_20 = param_1->TypeIndex;
    uVar4 = (ulonglong)bStack_20;
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVariant<float,__int64> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<float,__int64>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar4])(&local_28,param_1);
    this->_padding_ = local_28;
    *(ulonglong *)&this->TypeIndex = CONCAT71(uStack_1f,bStack_20);
  }
  return this;
}

// TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_> @ 1488ad920

TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
* __thiscall
TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
::
TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
          (TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
           *this,TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType> @ 148a7ec70

TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
* __thiscall
TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
::
TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
          (TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
           *this,TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType> @ 148a7ecf0

TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
* __thiscall
TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
::
TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
          (TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
           *this,TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

