// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// CreateOperator @ 14b2c3ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FWavePlayerOperatorFactory::CreateOperator
          (FWavePlayerOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  FInputVertexInterfaceData *this_00;
  FOutputDataVertex *pFVar3;
  FOperatorSettings *pFVar4;
  FGraphRenderCost *this_01;
  FMetasoundEnvironment *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FInputBinding *pFVar9;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar10;
  FGuid *pFVar11;
  FNodeRenderCost *pFVar12;
  FWavePlayerOperator *this_02;
  FWavePlayerOperator *pFVar13;
  undefined1 auStackY_258 [32];
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FNodeRenderCost local_1d0;
  undefined1 local_1b8 [64];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  bool local_98;
  int local_90;
  FGraphRenderCost *local_88;
  FSharedReferencer<1> local_80;
  FNodeRenderCost local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  iVar1 = (this->OutputAudioVertices).ArrayNum;
  pFVar13 = (FWavePlayerOperator *)0x0;
  puVar2 = *(undefined8 **)&(param_2->Errors).ArrayNum;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar3 = (FOutputDataVertex *)(this->OutputAudioVertices).AllocatorInstance.Data;
  local_1b8._0_8_ = *puVar2;
  local_1b8._8_8_ = puVar2[1];
  local_1b8._16_8_ = (FScriptContainerElement *)0x0;
  local_1b8._24_4_ = iVar1;
  if (iVar1 == 0) {
    local_1b8._28_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,0,(ForAnyElementType *)(local_1b8 + 0x10),iVar1,
               (int *)(local_1b8 + 0x1c));
    ConstructItems<Metasound::FOutputDataVertex,Metasound::FOutputDataVertex,int>
              ((void *)local_1b8._16_8_,pFVar3,iVar1);
  }
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputTriggerPlayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)(local_1b8 + 0x20),&local_218,pFVar4
            );
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputTriggerStopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_178,&local_210,pFVar4);
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputWaveAssetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveAsset>
            (this_00,(TDataReadReference<Metasound::FWaveAsset> *)local_158,&local_208,pFVar4);
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputStartTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this_00,(TDataReadReference<Metasound::FTime> *)local_138,&local_200,pFVar4);
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputPitchShiftName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_118,&local_1f8,pFVar4);
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputLoopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_f8,&local_1f0,pFVar4);
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputLoopStartName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this_00,(TDataReadReference<Metasound::FTime> *)local_d8,&local_1e8,pFVar4);
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputLoopDurationName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this_00,(TDataReadReference<Metasound::FTime> *)local_b8,&local_1e0,pFVar4);
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WavePlayerVertexNames::InputMaintainAudioSyncName);
  pFVar9 = FInputVertexInterfaceData::FindChecked(this_00,&local_1d8);
  if ((pFVar9->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_60,&(pFVar9->Vertex).Literal.Value);
    bVar7 = TDataLiteralFactory<bool,Metasound::DataFactoryPrivate::TDataTypeCreator<bool>_>::
            CreateExplicitArgs(pFVar4,(FLiteral *)&local_60);
    if ((0xc < local_60.TypeIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      TVar10.Ptr = (IOperator *)(*pcVar6)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.TypeIndex])(&local_60);
  }
  else {
    if (((pFVar9->Data).bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      TVar10.Ptr = (IOperator *)(*pcVar6)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
    }
    bVar7 = FAnyDataReference::GetAs<bool>(&(pFVar9->Data).TypedValue);
  }
  this_01 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
  local_98 = bVar7;
  if (this_01 == (FGraphRenderCost *)0x0) {
    local_90 = -1;
    local_1d0._4_4_ = 0;
    local_1d0.NodeIndex = -1;
    local_1d0.GraphRenderCost.Object = (FGraphRenderCost *)0x0;
    local_1d0.GraphRenderCost.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar12 = &local_1d0;
  }
  else {
    pFVar5 = *(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8;
    pFVar11 = (FGuid *)(**(code **)(*(longlong *)(param_2->Errors).AllocatorInstance.Data + 0x10))()
    ;
    pFVar12 = FGraphRenderCost::AddNode(this_01,&local_78,pFVar11,pFVar5);
    local_90 = pFVar12->NodeIndex;
  }
  local_88 = (pFVar12->GraphRenderCost).Object;
  local_80.ReferenceController = (pFVar12->GraphRenderCost).SharedReferenceCount.ReferenceController
  ;
  (pFVar12->GraphRenderCost).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (pFVar12->GraphRenderCost).Object = (FGraphRenderCost *)0x0;
  if (this_01 == (FGraphRenderCost *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d0.GraphRenderCost.SharedReferenceCount.ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.GraphRenderCost.SharedReferenceCount.ReferenceController);
  }
  this_02 = ::operator_new(800);
  if (this_02 != (FWavePlayerOperator *)0x0) {
    pFVar13 = FWavePlayerOperator::FWavePlayerOperator(this_02,(FWavePlayerOpArgs *)local_1b8);
  }
  param_1->Node = (INode *)pFVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_118._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_178._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_1b8._48_8_);
  if ((FScriptContainerElement *)local_1b8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._16_8_);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

