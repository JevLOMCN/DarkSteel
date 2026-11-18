// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> @ 14660e130

TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
* __thiscall
UE::MovieScene::
TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
::
TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
          (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
           *this,TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
                 *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = (param_1->Data).ObjectPtr.field0_0x0.DebugPtr;
  (this->Data).ObjectPtr.field0_0x0.DebugPtr = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  (this->Data).ObjectKey = (param_1->Data).ObjectKey;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&this->Binding,&param_1->Binding);
  pUVar1 = *(UObject **)&param_1->MetaData;
  *(UObject **)&this->MetaData = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  (this->MetaData).field_0x8 = (param_1->MetaData).field_0x8;
  return this;
}

// ~TPreAnimatedPropertyValue<FString> @ 14661c120

void __thiscall
UE::MovieScene::TPreAnimatedPropertyValue<FString>::~TPreAnimatedPropertyValue<FString>
          (TPreAnimatedPropertyValue<FString> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Binding).TypeIndex;
  if (2 < uVar4) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Binding);
  pFVar1 = (this->Data).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TPreAnimatedPropertyValue<FText> @ 14661c1a0

void __thiscall
UE::MovieScene::TPreAnimatedPropertyValue<FText>::~TPreAnimatedPropertyValue<FText>
          (TPreAnimatedPropertyValue<FText> *this)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Binding).TypeIndex;
  if (2 < uVar4) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Binding);
  pIVar1 = (this->Data).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// operator= @ 146621ee0

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> * __thiscall
UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>::operator=
          (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *this,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Data).T_Y;
  (this->Data).T_X = (param_1->Data).T_X;
  (this->Data).T_Y = dVar1;
  dVar1 = (param_1->Data).R_X;
  (this->Data).T_Z = (param_1->Data).T_Z;
  (this->Data).R_X = dVar1;
  dVar1 = (param_1->Data).R_Z;
  (this->Data).R_Y = (param_1->Data).R_Y;
  (this->Data).R_Z = dVar1;
  dVar1 = (param_1->Data).S_Y;
  (this->Data).S_X = (param_1->Data).S_X;
  (this->Data).S_Y = dVar1;
  (this->Data).S_Z = (param_1->Data).S_Z;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::operator=(&this->Binding,&param_1->Binding);
  return this;
}

