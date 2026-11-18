// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 101

// AddInitialValue @ 1466384b0

FInitialValueIndex __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
::AddInitialValue(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
                  *this,FKeyType *param_1,FDoubleIntermediateVector *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *in_R9;
  undefined2 local_res8 [8];
  FSparseArrayAllocationInfo local_48;
  FDoubleIntermediateVector *local_38;
  undefined2 *local_30;
  
  iVar1 = *(int *)&(this->PropertyValues).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)&this->PropertyValues,
                       (int *)&(this->PropertyValues).field_0x8,
                       (int *)&(this->PropertyValues).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyValues).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->PropertyValues).field_0x30;
    lVar3 = *(longlong *)&this->PropertyValues;
    iVar2 = *(int *)((longlong)iVar8 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->PropertyValues).field_0x30 = iVar2;
    *(int *)&(this->PropertyValues).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,&local_48,
             iVar8);
  if (local_48.Pointer != (undefined8 *)0x0) {
    uVar5 = in_R9[1];
    *(undefined8 *)local_48.Pointer = *in_R9;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    uVar5 = in_R9[3];
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = in_R9[2];
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = uVar5;
  }
  if (0xfffe < local_48.Index) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex < int32(uint16(0xFFFF))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                       ,0x184,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FInitialValueIndex)uVar7;
    }
  }
  local_30 = local_res8;
  local_res8[0] = (undefined2)local_48.Index;
  local_38 = param_2;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToPropertyIndex,
             (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType_const_&,unsigned_short_const_&>
              *)(local_res8 + 4),(bool *)&local_38);
  *(undefined2 *)&(param_1->Object).ObjectIndex = local_res8[0];
  return (FInitialValueIndex)(ushort)param_1;
}

// AddInitialValue @ 146638600

FInitialValueIndex __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
::AddInitialValue(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
                  *this,FKeyType *param_1,TRotator<double> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *in_R9;
  undefined2 local_res8 [8];
  FSparseArrayAllocationInfo local_48;
  TRotator<double> *local_38;
  undefined2 *local_30;
  
  iVar1 = *(int *)&(this->PropertyValues).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)&this->PropertyValues,
                       (int *)&(this->PropertyValues).field_0x8,
                       (int *)&(this->PropertyValues).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyValues).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->PropertyValues).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->PropertyValues;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x18);
    *(int *)&(this->PropertyValues).field_0x30 = iVar2;
    *(int *)&(this->PropertyValues).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,&local_48,
             iVar8);
  if (local_48.Pointer != (undefined8 *)0x0) {
    uVar5 = in_R9[1];
    *(undefined8 *)local_48.Pointer = *in_R9;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = in_R9[2];
  }
  if (0xfffe < local_48.Index) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex < int32(uint16(0xFFFF))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                       ,0x184,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FInitialValueIndex)uVar7;
    }
  }
  local_30 = local_res8;
  local_res8[0] = (undefined2)local_48.Index;
  local_38 = param_2;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToPropertyIndex,
             (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType_const_&,unsigned_short_const_&>
              *)(local_res8 + 4),(bool *)&local_38);
  *(undefined2 *)&(param_1->Object).ObjectIndex = local_res8[0];
  return (FInitialValueIndex)(ushort)param_1;
}

// AddInitialValue @ 146638750

FInitialValueIndex __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::
AddInitialValue(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_> *this,
               FKeyType *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  FString *in_R9;
  undefined2 local_res8 [8];
  FSparseArrayAllocationInfo local_48;
  FString *local_38;
  undefined2 *local_30;
  
  iVar1 = *(int *)&(this->PropertyValues).field_0x34;
  if (iVar1 == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)&this->PropertyValues,
                       (int *)&(this->PropertyValues).field_0x8,
                       (int *)&(this->PropertyValues).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyValues).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->PropertyValues).field_0x30;
    lVar3 = *(longlong *)&this->PropertyValues;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->PropertyValues).field_0x30 = iVar2;
    *(int *)&(this->PropertyValues).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,&local_48,
             iVar7);
  if (local_48.Pointer != (FString *)0x0) {
    ::FString::FString(local_48.Pointer,in_R9);
  }
  if (0xfffe < local_48.Index) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex < int32(uint16(0xFFFF))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                       ,0x184,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FInitialValueIndex)uVar6;
    }
  }
  local_30 = local_res8;
  local_res8[0] = (undefined2)local_48.Index;
  local_38 = param_2;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToPropertyIndex,
             (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType_const_&,unsigned_short_const_&>
              *)(local_res8 + 4),(bool *)&local_38);
  *(undefined2 *)&(param_1->Object).ObjectIndex = local_res8[0];
  return (FInitialValueIndex)(ushort)param_1;
}

// AddInitialValue @ 146638890

FInitialValueIndex __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::
AddInitialValue(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *this,
               FKeyType *param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  longlong *in_R9;
  undefined2 local_res8 [4];
  undefined1 local_res10 [16];
  FSparseArrayAllocationInfo local_48;
  FText *local_38;
  undefined2 *local_30;
  
  iVar1 = *(int *)&(this->PropertyValues).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)&this->PropertyValues,
                       (int *)&(this->PropertyValues).field_0x8,
                       (int *)&(this->PropertyValues).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyValues).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->PropertyValues).field_0x30;
    lVar3 = *(longlong *)&this->PropertyValues;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->PropertyValues).field_0x30 = iVar2;
    *(int *)&(this->PropertyValues).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,&local_48,
             iVar8);
  if (local_48.Pointer != (longlong *)0x0) {
    *(longlong *)local_48.Pointer = 0;
    plVar4 = (longlong *)*in_R9;
    *(longlong **)local_48.Pointer = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,local_res10);
    }
    *(int *)((longlong)local_48.Pointer + 8) = (int)in_R9[1];
  }
  if (0xfffe < local_48.Index) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex < int32(uint16(0xFFFF))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                       ,0x184,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FInitialValueIndex)uVar7;
    }
  }
  local_30 = local_res8;
  local_res8[0] = (undefined2)local_48.Index;
  local_38 = param_2;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToPropertyIndex,
             (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType_const_&,unsigned_short_const_&>
              *)(local_res10 + 8),(bool *)&local_38);
  *(undefined2 *)&(param_1->Object).ObjectIndex = local_res8[0];
  return (FInitialValueIndex)(ushort)param_1;
}

// AddInitialValue @ 1466389f0

FInitialValueIndex __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::AddInitialValue
          (TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits> *this,FKeyType *param_1,
          FObjectComponent *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *in_R9;
  undefined2 local_res8 [8];
  FSparseArrayAllocationInfo local_48;
  FObjectComponent *local_38;
  undefined2 *local_30;
  
  iVar1 = *(int *)&(this->PropertyValues).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)&this->PropertyValues,
                       (int *)&(this->PropertyValues).field_0x8,
                       (int *)&(this->PropertyValues).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyValues).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->PropertyValues).field_0x30;
    lVar3 = *(longlong *)&this->PropertyValues;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->PropertyValues).field_0x30 = iVar2;
    *(int *)&(this->PropertyValues).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,&local_48,
             iVar8);
  if (local_48.Pointer != (undefined8 *)0x0) {
    pUVar4 = (UObject *)*in_R9;
    *(UObject **)local_48.Pointer = pUVar4;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar4);
    }
    *(undefined8 *)((longlong)local_48.Pointer + 8) = in_R9[1];
  }
  if (0xfffe < local_48.Index) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex < int32(uint16(0xFFFF))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                       ,0x184,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FInitialValueIndex)uVar7;
    }
  }
  local_30 = local_res8;
  local_res8[0] = (undefined2)local_48.Index;
  local_38 = param_2;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToPropertyIndex,
             (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType_const_&,unsigned_short_const_&>
              *)(local_res8 + 4),(bool *)&local_38);
  *(undefined2 *)&(param_1->Object).ObjectIndex = local_res8[0];
  return (FInitialValueIndex)(ushort)param_1;
}

// CleanupStaleEntries @ 14664c160

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664c257;
        }
        else {
LAB_14664c257:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664c330

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664c427;
        }
        else {
LAB_14664c427:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664c500

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664c5f7;
        }
        else {
LAB_14664c5f7:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664c6d0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664c7c7;
        }
        else {
LAB_14664c7c7:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664c8a0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664c997;
        }
        else {
LAB_14664c997:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664ca70

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664cb67;
        }
        else {
LAB_14664cb67:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664cc40

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
CleanupStaleEntries(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                    *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664cd37;
        }
        else {
LAB_14664cd37:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<1,1,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<1,1,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664ce10

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::
CleanupStaleEntries(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_> *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664cf07;
        }
        else {
LAB_14664cf07:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664cfe0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664d0d7;
        }
        else {
LAB_14664d0d7:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664d1b0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664d2a7;
        }
        else {
LAB_14664d2a7:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664d380

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664d477;
        }
        else {
LAB_14664d477:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664d550

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664d647;
        }
        else {
LAB_14664d647:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664d720

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664d817;
        }
        else {
LAB_14664d817:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664d8f0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
           *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664d9e7;
        }
        else {
LAB_14664d9e7:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664dac0

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::
CleanupStaleEntries(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_> *this
                   )

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664dbb7;
        }
        else {
LAB_14664dbb7:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664dc90

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::
CleanupStaleEntries(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664dd87;
        }
        else {
LAB_14664dd87:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664de60

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits> *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664df57;
        }
        else {
LAB_14664df57:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<1,1,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<1,1,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664e030

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664e127;
        }
        else {
LAB_14664e127:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// CleanupStaleEntries @ 14664e200

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::CleanupStaleEntries
          (TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits> *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14664e2f7;
        }
        else {
LAB_14664e2f7:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// FindPropertyIndex @ 146672600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667270d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667270d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146672750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667285d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667285d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466728a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466729ad;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466729ad:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466729f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146672afd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146672afd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146672b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146672c4d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146672c4d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146672c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146672d9d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_146672d9d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146672de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146672eed;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146672eed:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146672f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667303d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667303d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667318d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667318d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466731d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466732dd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466732dd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667342d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667342d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667357d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667357d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466735c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466736cd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466736cd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667381d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667381d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667396d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667396d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466739b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146673abd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146673abd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146673c0d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146673c0d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146673d5d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_146673d5d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                  *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146673ead;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146673ead:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146673ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                  *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146673ffd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146673ffd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                  *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667414d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667414d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_> *this,
                 UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667429d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667429d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466742e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_> *this,
                 UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466743ed;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466743ed:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_> *this,
                 UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667453d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667453d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667468d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667468d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466746d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466747dd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466747dd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667492d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667492d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146674a7d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146674a7d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146674bcd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146674bcd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146674d1d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_146674d1d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146674e6d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146674e6d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146674eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146674fbd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146674fbd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667510d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667510d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667525d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667525d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466752a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466753ad;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466753ad:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466753f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466754fd;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466754fd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667564d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667564d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667579d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667579d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466757e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466758ed;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466758ed:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                    *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146675a3d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146675a3d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                    *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146675b8d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146675b8d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
::FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                    *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146675cdd;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_146675cdd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_> *this,
                 UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146675e2d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146675e2d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_> *this,
                 UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146675f7d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146675f7d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146675fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_> *this,
                 UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466760cd;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466760cd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *this,
                 UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667621d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667621d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *this,
                 UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667636d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667636d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466763b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *this,
                 UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466764bd;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466764bd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits> *this,UObject *param_1,
          FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667660d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667660d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits> *this,UObject *param_1,
          ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667675d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667675d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466767a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits> *this,UObject *param_1,
          FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466768ad;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466768ad:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 1466768f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this,UObject *param_1,
          FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_1466769fd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_1466769fd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this,UObject *param_1,
          ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146676b4d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146676b4d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this,UObject *param_1,
          FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146676c9d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_146676c9d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits> *this,UObject *param_1,
          FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146676ded;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146676ded:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits> *this,UObject *param_1,
          ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_146676f3d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_146676f3d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 146676f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FindPropertyIndex
          (TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits> *this,UObject *param_1,
          FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14667708d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14667708d:
  return SUB84(param_1,0);
}

// Reset @ 1466d80e0

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_> *this,
       TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,uVar7
                   ,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d81c0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d82a0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8380

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8460

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8540

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,uVar7
                   ,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8620

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::Reset
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
           *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<1,1,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<1,1,FDefaultSparseArrayAllocator> *)&this->PropertyValues,uVar7
                   ,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8700

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::Reset
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_> *this,
          TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,uVar7
                   ,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d87e0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  FInitialValueIndex *pFVar14;
  
  pFVar14 = param_1->DataPtr;
  pFVar1 = pFVar14 + param_1->ArrayNum;
  if (pFVar14 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar3 = pFVar14->Index;
    if ((int)(uint)uVar3 < *(int *)&(this->PropertyValues).field_0x28) {
      puVar12 = &(this->PropertyValues).field_0x10;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar10 = puVar12;
      if (puVar4 != (undefined1 *)0x0) {
        puVar10 = puVar4;
      }
      if ((*(uint *)(puVar10 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
        lVar5 = *(longlong *)&this->PropertyValues;
        bVar7 = (byte)uVar3 & 0x1f;
        uVar11 = 1 << bVar7 | 1U >> 0x20 - bVar7;
        uVar13 = (uint)uVar3;
        if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar13) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = *(undefined1 **)&(this->PropertyValues).field_0x20;
        puVar10 = puVar12;
        if (puVar4 != (undefined1 *)0x0) {
          puVar10 = puVar4;
        }
        if (((*(uint *)(puVar10 + (ulonglong)(uVar3 >> 5) * 4) & uVar11) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(this->PropertyValues).field_0x34 != 0) {
          *(uint *)(lVar5 + (longlong)*(int *)&(this->PropertyValues).field_0x30 * 0x18) = uVar13;
        }
        puVar2 = (undefined4 *)(lVar5 + (ulonglong)uVar3 * 0x18);
        *puVar2 = 0xffffffff;
        if (*(int *)&(this->PropertyValues).field_0x34 < 1) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = *(undefined4 *)&(this->PropertyValues).field_0x30;
        }
        puVar2[1] = uVar9;
        puVar4 = &(this->PropertyValues).field_0x34;
        *(int *)puVar4 = *(int *)puVar4 + 1;
        *(uint *)&(this->PropertyValues).field_0x30 = uVar13;
        if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar13) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = *(undefined1 **)&(this->PropertyValues).field_0x20;
        if (puVar4 != (undefined1 *)0x0) {
          puVar12 = puVar4;
        }
        *(uint *)(puVar12 + (ulonglong)(uVar3 >> 5) * 4) =
             *(uint *)(puVar12 + (ulonglong)(uVar3 >> 5) * 4) & ~uVar11;
      }
    }
    pFVar14 = pFVar14 + 1;
    if (pFVar14 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d89d0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8ab0

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8b90

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8c70

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8d50

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
::Reset(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
        *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8e30

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::Reset
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_> *this,
          TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArray<FString,FDefaultSparseArrayAllocator>::DestroyElements
                  (&this->PropertyValues,uVar7,1);
        TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   (uint)uVar2,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d8f30

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::Reset
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *this,
          TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArray<FText,FDefaultSparseArrayAllocator>::DestroyElements
                  (&this->PropertyValues,uVar7,1);
        TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   (uint)uVar2,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d9030

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::Reset
          (TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits> *this,
          TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<1,1,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<1,1,FDefaultSparseArrayAllocator> *)&this->PropertyValues,uVar7
                   ,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d9110

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::Reset
          (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this,
          TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,uVar7
                   ,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// Reset @ 1466d91f0

void __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::Reset
          (TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits> *this,
          TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FInitialValueIndex *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar6->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      uVar7 = (uint)uVar2;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar8 = &(this->PropertyValues).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      if ((*(uint *)(puVar8 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,
                   uVar7,1);
      }
    }
    pFVar6 = pFVar6 + 1;
    if (pFVar6 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

// AddInitialValue @ 1468a6570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInitialValueIndex __thiscall
UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::AddInitialValue
          (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this,UObject *param_1,
          double *param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  undefined6 in_register_0000008a;
  undefined1 auStackY_b8 [32];
  undefined2 local_88 [4];
  FWeakObjectPtr local_80;
  TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType_const_&,unsigned_short_const_&>
  local_78;
  FSparseArrayAllocationInfo local_68;
  FWeakObjectPtr *local_58;
  undefined2 *local_50;
  FWeakObjectPtr local_48 [2];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_48[0].ObjectIndex = 0;
  local_48[0].ObjectSerialNumber = 0;
  if (param_2 != (double *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_80.ObjectIndex = 0;
    local_80.ObjectSerialNumber = 0;
    local_78.Value = (ushort *)param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_78.Value);
    local_48[0] = local_80;
  }
  iVar1 = *(int *)&(this->PropertyValues).field_0x34;
  local_38 = 0;
  if (iVar1 == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,(ForAnyElementType *)&this->PropertyValues,
                       (int *)&(this->PropertyValues).field_0x8,
                       (int *)&(this->PropertyValues).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyValues).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->PropertyValues).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->PropertyValues;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 8);
    *(int *)&(this->PropertyValues).field_0x30 = iVar2;
    *(int *)&(this->PropertyValues).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,&local_68,
             iVar7);
  if (local_68.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_68.Pointer = *(undefined8 *)CONCAT62(in_register_0000008a,param_3);
  }
  if (0xfffe < local_68.Index) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex < int32(uint16(0xFFFF))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                       ,0x184,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FInitialValueIndex)uVar6;
    }
  }
  local_58 = local_48;
  local_88[0] = (undefined2)local_68.Index;
  local_50 = local_88;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToPropertyIndex,&local_78,(bool *)&local_58);
  *(undefined2 *)param_1 = local_88[0];
  return (FInitialValueIndex)(ushort)param_1;
}

