// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 4

// CreateOperator @ 14b2c68e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
FCoverterOperatorFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  void *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
           ::GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            (this_00,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                      *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_H_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
             ::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2c6df0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
FCoverterOperatorFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  undefined8 uVar2;
  FName *pFVar3;
  void *this_01;
  FConverterOperator *pFVar4;
  undefined **local_68 [2];
  TReferenceControllerBase<0> *local_58;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
  TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
            (local_48,NewObject);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_28,pFVar3,pFVar1);
  this_01 = ::operator_new(0x50);
  uVar2 = local_48._16_8_;
  pFVar4 = (FConverterOperator *)0x0;
  if (this_01 != (void *)0x0) {
    local_68[1] = (undefined **)local_48._8_8_;
    local_58 = (TReferenceControllerBase<0> *)local_48._16_8_;
    if ((TReferenceControllerBase<0> *)local_48._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_48._16_8_ + 8) = *(int *)(local_48._16_8_ + 8) + 1;
    }
    local_48._16_8_ = local_28._16_8_;
    local_68[0] = &
                  ___7__TDataWriteReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    local_48._8_8_ = local_28._8_8_;
    if ((TReferenceControllerBase<0> *)local_28._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_28._16_8_ + 8) = *(int *)(local_28._16_8_ + 8) + 1;
    }
    local_48._0_8_ = &___7__TDataReadReference_H_Metasound__6B_;
    pFVar4 = TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_48,
                        (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         *)local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)uVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2c8570

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
FCoverterOperatorFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  void *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
           ::GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                      *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_H_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
             ::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2c9500

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
FCoverterOperatorFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  void *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(pTVar4 + 1,Zero);
    pTVar8 = pTVar4 + 1;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

