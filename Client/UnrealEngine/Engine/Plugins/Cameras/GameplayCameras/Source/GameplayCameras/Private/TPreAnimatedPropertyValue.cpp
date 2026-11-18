// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// operator= @ 14d6011c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TPreAnimatedPropertyValue<FCameraFramingZone> * __thiscall
UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>::operator=
          (TPreAnimatedPropertyValue<FCameraFramingZone> *this,
          TPreAnimatedPropertyValue<FCameraFramingZone> *param_1)

{
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  TPreAnimatedPropertyValue<FCameraFramingZone> *pTVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  dVar5 = (param_1->Data).Top;
  pTVar1 = &this->Binding;
  (this->Data).Left = (param_1->Data).Left;
  (this->Data).Top = dVar5;
  dVar5 = (param_1->Data).Bottom;
  (this->Data).Right = (param_1->Data).Right;
  (this->Data).Bottom = dVar5;
  if (&param_1->Binding != pTVar1) {
    bVar3 = (param_1->Binding).TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar3);
    if (2 < (ulonglong)bVar3) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TPreAnimatedPropertyValue<FCameraFramingZone> *)(*pcVar4)();
        return pTVar9;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar3])(&local_38,&param_1->Binding);
    uVar2 = *(ulonglong *)&(this->Binding).TypeIndex;
    lVar6 = pTVar1->_padding_;
    lVar7 = (this->Binding)._padding_;
    pTVar1->_padding_ = local_38;
    (this->Binding)._padding_ = lStack_30;
    *(ulonglong *)&(this->Binding).TypeIndex = local_28;
    local_38 = lVar6;
    lStack_30 = lVar7;
    local_28 = uVar2;
    if (2 < (uVar2 & 0xff)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TPreAnimatedPropertyValue<FCameraFramingZone> *)(*pcVar4)();
        return pTVar9;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar2 & 0xff])(&local_38);
  }
  return this;
}

