// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// RestorePreAnimatedValue @ 14d633190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<FCameraFramingZone> *param_2,FRestoreStateParams *param_3)

{
  uchar uVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar8;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar7 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar8 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar8 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar8 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      uVar2 = (ushort)pTVar8->_padding_;
      dVar5 = (param_2->Data).Top;
      *(double *)(&pUVar7->field_0x0 + uVar2) = (param_2->Data).Left;
      *(double *)((longlong)(&pUVar7->field_0x0 + uVar2) + 8) = dVar5;
      dVar5 = (param_2->Data).Bottom;
      *(double *)(&pUVar7->field_0x10 + uVar2) = (param_2->Data).Right;
      *(double *)((longlong)(&pUVar7->field_0x10 + uVar2) + 8) = dVar5;
      return;
    }
    pTVar8 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar8 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar8 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<FCameraFramingZone>
                ((FTrackInstancePropertyBindings *)pTVar8->_padding_,pUVar7,&param_2->Data);
      return;
    }
    if ((uVar1 != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = (param_2->Binding)._padding_;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x20))(pUVar7,param_2);
    }
  }
  return;
}

