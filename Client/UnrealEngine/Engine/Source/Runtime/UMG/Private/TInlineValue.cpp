// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_&> @ 1468e78b0

void __thiscall
TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_&>
          (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this,
          FMaterialGroupingPolicy *param_1,TComponentTypeID<UObject_*> *param_2,
          TComponentTypeID<FWidgetMaterialHandle> *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TComponentTypeID<UObject_*> TVar3;
  TComponentTypeID<FWidgetMaterialHandle> TVar4;
  code *pcVar5;
  bool bVar6;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *pTVar7;
  
  uVar2 = this->field_0x100;
  if (this->bIsValid) {
    pTVar7 = this;
    if (!this->bInline) {
      pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
    }
    this->field_0x100 = uVar2 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar7->Data).Pad)();
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  this->bIsValid = true;
  this->bInline = true;
  TVar3 = *param_2;
  TVar4 = *param_3;
  (this->Data).Pad[8] = '\0';
  (this->Data).Pad[9] = '\0';
  (this->Data).Pad[10] = '\0';
  (this->Data).Pad[0xb] = '\0';
  (this->Data).Pad[0xc] = '\0';
  (this->Data).Pad[0xd] = '\0';
  (this->Data).Pad[0xe] = '\0';
  (this->Data).Pad[0xf] = '\0';
  (this->Data).Pad[0x10] = '\0';
  (this->Data).Pad[0x11] = '\0';
  (this->Data).Pad[0x12] = '\0';
  (this->Data).Pad[0x13] = '\0';
  (this->Data).Pad[0x14] = '\0';
  (this->Data).Pad[0x15] = '\0';
  (this->Data).Pad[0x16] = '\0';
  (this->Data).Pad[0x17] = '\0';
  (this->Data).Pad[0x28] = '\0';
  (this->Data).Pad[0x29] = '\0';
  (this->Data).Pad[0x2a] = '\0';
  (this->Data).Pad[0x2b] = '\0';
  (this->Data).Pad[0x2c] = '\0';
  (this->Data).Pad[0x2d] = '\0';
  (this->Data).Pad[0x2e] = '\0';
  (this->Data).Pad[0x2f] = '\0';
  (this->Data).Pad[0x30] = '\0';
  (this->Data).Pad[0x31] = '\0';
  (this->Data).Pad[0x32] = '\0';
  (this->Data).Pad[0x33] = '\0';
  (this->Data).Pad[0x34] = 0x80;
  (this->Data).Pad[0x35] = '\0';
  (this->Data).Pad[0x36] = '\0';
  (this->Data).Pad[0x37] = '\0';
  (this->Data).Pad[0x38] = 0xff;
  (this->Data).Pad[0x39] = 0xff;
  (this->Data).Pad[0x3a] = 0xff;
  (this->Data).Pad[0x3b] = 0xff;
  (this->Data).Pad[0x3c] = '\0';
  (this->Data).Pad[0x3d] = '\0';
  (this->Data).Pad[0x3e] = '\0';
  (this->Data).Pad[0x3f] = '\0';
  (this->Data).Pad[0x48] = '\0';
  (this->Data).Pad[0x49] = '\0';
  (this->Data).Pad[0x4a] = '\0';
  (this->Data).Pad[0x4b] = '\0';
  (this->Data).Pad[0x4c] = '\0';
  (this->Data).Pad[0x4d] = '\0';
  (this->Data).Pad[0x4e] = '\0';
  (this->Data).Pad[0x4f] = '\0';
  (this->Data).Pad[0x50] = '\0';
  (this->Data).Pad[0x51] = '\0';
  (this->Data).Pad[0x52] = '\0';
  (this->Data).Pad[0x53] = '\0';
  (this->Data).Pad[0x58] = '\0';
  (this->Data).Pad[0x59] = '\0';
  (this->Data).Pad[0x5a] = '\0';
  (this->Data).Pad[0x5b] = '\0';
  (this->Data).Pad[0x5c] = '\0';
  (this->Data).Pad[0x5d] = '\0';
  (this->Data).Pad[0x5e] = '\0';
  (this->Data).Pad[0x5f] = '\0';
  (this->Data).Pad[0x60] = '\0';
  (this->Data).Pad[0x61] = '\0';
  (this->Data).Pad[0x62] = '\0';
  (this->Data).Pad[99] = '\0';
  (this->Data).Pad[100] = '\0';
  (this->Data).Pad[0x65] = '\0';
  (this->Data).Pad[0x66] = '\0';
  (this->Data).Pad[0x67] = '\0';
  (this->Data).Pad[0x78] = '\0';
  (this->Data).Pad[0x79] = '\0';
  (this->Data).Pad[0x7a] = '\0';
  (this->Data).Pad[0x7b] = '\0';
  (this->Data).Pad[0x7c] = '\0';
  (this->Data).Pad[0x7d] = '\0';
  (this->Data).Pad[0x7e] = '\0';
  (this->Data).Pad[0x7f] = '\0';
  (this->Data).Pad[0x80] = '\0';
  (this->Data).Pad[0x81] = '\0';
  (this->Data).Pad[0x82] = '\0';
  (this->Data).Pad[0x83] = '\0';
  (this->Data).Pad[0x84] = 0x80;
  (this->Data).Pad[0x85] = '\0';
  (this->Data).Pad[0x86] = '\0';
  (this->Data).Pad[0x87] = '\0';
  (this->Data).Pad[0x88] = 0xff;
  (this->Data).Pad[0x89] = 0xff;
  (this->Data).Pad[0x8a] = 0xff;
  (this->Data).Pad[0x8b] = 0xff;
  (this->Data).Pad[0x8c] = '\0';
  (this->Data).Pad[0x8d] = '\0';
  (this->Data).Pad[0x8e] = '\0';
  (this->Data).Pad[0x8f] = '\0';
  (this->Data).Pad[0x98] = '\0';
  (this->Data).Pad[0x99] = '\0';
  (this->Data).Pad[0x9a] = '\0';
  (this->Data).Pad[0x9b] = '\0';
  (this->Data).Pad[0x9c] = '\0';
  (this->Data).Pad[0x9d] = '\0';
  (this->Data).Pad[0x9e] = '\0';
  (this->Data).Pad[0x9f] = '\0';
  (this->Data).Pad[0xa0] = '\0';
  (this->Data).Pad[0xa1] = '\0';
  (this->Data).Pad[0xa2] = '\0';
  (this->Data).Pad[0xa3] = '\0';
  *(TComponentTypeID<UObject_*> *)((this->Data).Pad + 0xaa) = TVar3;
  *(TComponentTypeID<FWidgetMaterialHandle> *)((this->Data).Pad + 0xac) = TVar4;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TEntityGroupingHandler_UFMaterialGroupingPolicy___TMovieSceneMaterialSystem_UFWidgetMaterialAccessor_MovieScene_UE__PEAVUObject__VFWidgetMaterialHandle___MovieScene_UE__PEAVUObject__VFWidgetMaterialHandle___MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar7 = this;
  if (!this->bInline) {
    pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (pTVar7 != this) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

