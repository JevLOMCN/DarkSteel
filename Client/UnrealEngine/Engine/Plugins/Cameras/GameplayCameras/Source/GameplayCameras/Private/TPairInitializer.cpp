// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// operator<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>_TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int> @ 14d57b3c0

TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int> * __thiscall
TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>
::
operator<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>_TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>
          (TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>
           *this,TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>
                 *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> FVar2;
  int *piVar3;
  TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int> *_Dst;
  ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> _Src;
  
  FVar2 = (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)this->Key;
  piVar3 = this->Value;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  _Src = *(ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> *)
          ((longlong)FVar2 + 0x20);
  iVar1 = *(int *)((longlong)FVar2 + 0x28);
  *(int *)&__return_storage_ptr__->field_0x28 = iVar1;
  if (_Src == (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0) {
    _Src = FVar2;
  }
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>_>
              (8,4,iVar1,0,
               (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> *)
               __return_storage_ptr__,iVar1,(int *)&__return_storage_ptr__->field_0x2c);
    _Dst = __return_storage_ptr__;
    if (*(TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int> **)
         &__return_storage_ptr__->field_0x20 !=
        (TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int> *)0x0) {
      _Dst = *(TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int> **)
              &__return_storage_ptr__->field_0x20;
    }
    memcpy(_Dst,(void *)_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)((longlong)FVar2 + 0x30);
  *(int *)&__return_storage_ptr__->field_0x38 = *piVar3;
  return __return_storage_ptr__;
}

// operator<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>_TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short> @ 14d5e5ac0

TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>
* __thiscall
TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>
::
operator<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>_TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>
          (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>
           *this,TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>
                 *__return_storage_ptr__)

{
  byte bVar1;
  FKeyType *pFVar2;
  ushort *puVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>
  *pTVar7;
  
  pFVar2 = this->Key;
  puVar3 = this->Value;
  iVar5 = (pFVar2->Object).ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = (pFVar2->Object).ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar5;
  bVar1 = (pFVar2->Property).TypeIndex;
  __return_storage_ptr__->field_0x10 = bVar1;
  if (2 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])
            (&__return_storage_ptr__->field_0x8,&pFVar2->Property);
  *(ushort *)&__return_storage_ptr__->field_0x14 = *puVar3;
  return __return_storage_ptr__;
}

