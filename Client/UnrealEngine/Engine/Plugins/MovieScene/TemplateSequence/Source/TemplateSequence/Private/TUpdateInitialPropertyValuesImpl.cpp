// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// Update @ 14ac80f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>::
Update(TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>
       *this,UMovieSceneEntitySystemLinker *param_1,
      TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::FFloatPropertyTraits> TVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  FComponentTypeID local_208;
  FComponentTypeID local_206 [3];
  FFloatPropertyTraits *local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d8;
  TStatIdData *pTStack_1d0;
  byte local_1c8;
  undefined7 uStack_1c7;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  undefined1 local_1a8 [16];
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_198;
  undefined2 uStack_196;
  TComponentTypeID<unsigned_short> TStack_194;
  undefined2 uStack_192;
  undefined4 local_190;
  TComponentTypeID<UObject_*> local_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined4 uStack_17e;
  TComponentTypeID<double> TStack_17a;
  undefined1 local_158 [14];
  FComponentAccess FStack_14a;
  undefined8 local_148;
  TStatIdData *pTStack_140;
  ulonglong local_138;
  Type TStack_130;
  uint uStack_12c;
  FEntityComponentFilter local_128;
  int local_78;
  int local_74;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  pFVar5 = FBuiltInComponentTypes::Get();
  TVar1 = param_2->CompositeID;
  iVar2 = (pFVar5->PropertyRegistry).Properties.ArrayNum;
  uVar8 = 0;
  if ((int)TVar1 < iVar2) {
    uVar8 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_218 = (longlong)(int)TVar1;
    local_210 = (longlong)iVar2;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_200 = &param_2->PropertyTraits;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1f8 = *(longlong **)
               ((pFVar5->PropertyRegistry).Properties.AllocatorInstance.Data +
               (longlong)(int)TVar1 * 0x70);
  if (local_1f8 != (longlong *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*local_1f8 + 8))(local_1f8,local_1a8);
    local_1f0 = *puVar6;
    uStack_1e8 = puVar6[1];
  }
  pTStack_1d0 = &TStatId::TStatId_NAME_None;
  local_198 = pFVar5->CustomPropertyIndex;
  TStack_194 = pFVar5->FastPropertyOffset;
  local_188 = pFVar5->BoundObject;
  local_190 = CONCAT22(0x7fff,pFVar5->SlowProperty);
  uStack_17e = local_190;
  TStack_17a = param_2->InitialValue;
  uStack_196 = 0x7fff;
  uStack_192 = 0x7fff;
  uStack_186 = CONCAT24(TStack_194,CONCAT22(0x7fff,local_198));
  local_208.Value = (param_2->PropertyTag).Value;
  uStack_180 = 0x7fff;
  local_158._2_6_ = uStack_186;
  local_158._0_2_ = local_188;
  local_158._10_4_ = local_190;
  local_158._8_2_ = 0x7fff;
  unique0x1000024e = TStack_17a;
  local_1d8 = 0;
  uStack_1c0 = 0x6ff;
  uStack_1bc = uStack_1bc & 0xffffff00;
  local_138 = CONCAT71(uStack_1c7,local_1c8) & 0xffffffffffffffe0;
  TStack_130 = 0x6ff;
  uStack_12c = uStack_1bc;
  local_148 = 0;
  pTStack_140 = &TStatId::TStatId_NAME_None;
  local_128.AllMask.Bits.NumBits = 0;
  local_128.AllMask.Bits.MaxBits = 0x180;
  local_128.NoneMask.Bits.NumBits = 0;
  local_128.NoneMask.Bits.MaxBits = 0x180;
  local_128.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ComplexMasks.ArrayNum = 0;
  local_128.ComplexMasks.ArrayMax = 0;
  local_78 = 0;
  local_74 = 0x180;
  local_40 = 0;
  local_3c = 0x180;
  local_1c8 = local_1c8 & 0xe0;
  AddAccessorToFilter((FComponentAccess *)local_158,&local_128);
  AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)(local_158 + 2),&local_128);
  AddAccessorToFilter(&FStack_14a,&local_128);
  local_1b8._First = &local_208;
  local_1b8._Last = local_206;
  FComponentMask::SetAll(&local_128.AllMask,&local_1b8);
  TStack_130 = (param_1->EntityManager).GatherThread;
  if ((TStack_130 == GameThread) || (TStack_130 == GameThread_Local)) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  local_138 = CONCAT71(local_138._1_7_,(byte)local_138 & 0xfe | bVar7);
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>
  ::
  RunInline_PerAllocation<UE::MovieScene::TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits>_>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>
              *)local_158,&param_1->EntityManager,
             (TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits> *)&local_200);
  if (local_128.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

