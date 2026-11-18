// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 50

// CreateOperator @ 14afd0030

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
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
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)local_38
             ,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_M_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
                                 *)local_58,(TDataWriteReference<float> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd0650

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::GetInputName
                     ();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)local_38
             ,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd0b30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
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
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar4[1]._padding_ = 0;
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)local_38
             ,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference__N_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
                                 *)local_58,(TDataWriteReference<bool> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd18b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
              (pTVar4 + 1,Lowpass);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd22a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *
                     )local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd2c60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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
  
  TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
  TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
            (local_48,NewObject);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           GetInputName();
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
                  ___7__TDataWriteReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
    ;
    local_48._8_8_ = local_28._8_8_;
    if ((TReferenceControllerBase<0> *)local_28._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_28._16_8_ + 8) = *(int *)(local_28._16_8_ + 8) + 1;
    }
    local_48._0_8_ = &___7__TDataReadReference_H_Metasound__6B_;
    pFVar4 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_48,
                        (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
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

// CreateOperator @ 14afd4590

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory::
CreateOperator(FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  FSharedReferencer<0> FVar2;
  FName *pFVar3;
  FConverterOperator *this_01;
  FConverterOperator *pFVar4;
  undefined **local_68;
  FStereoAudioFormat *local_60;
  TReferenceControllerBase<0> *local_58;
  TDataReference<Metasound::FStereoAudioFormat> local_48;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  TDataReference<Metasound::FStereoAudioFormat>::
  TDataReference<Metasound::FStereoAudioFormat><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_28,pFVar3,pFVar1);
  this_01 = ::operator_new(0x50);
  FVar2.ReferenceController = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  pFVar4 = (FConverterOperator *)0x0;
  if (this_01 != (FConverterOperator *)0x0) {
    local_60 = local_48.ObjectReference.Object;
    local_58 = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    local_48.ObjectReference.SharedReferenceCount.ReferenceController = local_18;
    local_68 = &___7__TDataWriteReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
    local_48.ObjectReference.Object = (FStereoAudioFormat *)local_28._8_8_;
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_48._padding_ = (longlong)&___7__TDataReadReference_M_Metasound__6B_;
    pFVar4 = TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::
             FConverterOperator(this_01,(TDataReadReference<float> *)&local_48,
                                (TDataWriteReference<Metasound::FStereoAudioFormat> *)&local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd56f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory::
CreateOperator(FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  FSharedReferencer<0> FVar2;
  FName *pFVar3;
  FConverterOperator *this_01;
  FConverterOperator *pFVar4;
  undefined **local_68;
  FStereoAudioFormat *local_60;
  TReferenceControllerBase<0> *local_58;
  TDataReference<Metasound::FStereoAudioFormat> local_48;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  TDataReference<Metasound::FStereoAudioFormat>::
  TDataReference<Metasound::FStereoAudioFormat><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_28,pFVar3,pFVar1);
  this_01 = ::operator_new(0x50);
  FVar2.ReferenceController = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  pFVar4 = (FConverterOperator *)0x0;
  if (this_01 != (FConverterOperator *)0x0) {
    local_60 = local_48.ObjectReference.Object;
    local_58 = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    local_48.ObjectReference.SharedReferenceCount.ReferenceController = local_18;
    local_68 = &___7__TDataWriteReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
    local_48.ObjectReference.Object = (FStereoAudioFormat *)local_28._8_8_;
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_48._padding_ = (longlong)&___7__TDataReadReference_H_Metasound__6B_;
    pFVar4 = TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::
             FConverterOperator(this_01,(TDataReadReference<int> *)&local_48,
                                (TDataWriteReference<Metasound::FStereoAudioFormat> *)&local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd66a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory::
CreateOperator(FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  FSharedReferencer<0> FVar2;
  FName *pFVar3;
  FConverterOperator *this_01;
  FConverterOperator *pFVar4;
  undefined **local_68;
  FStereoAudioFormat *local_60;
  TReferenceControllerBase<0> *local_58;
  TDataReference<Metasound::FStereoAudioFormat> local_48;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  TDataReference<Metasound::FStereoAudioFormat>::
  TDataReference<Metasound::FStereoAudioFormat><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_28,pFVar3,pFVar1);
  this_01 = ::operator_new(0x50);
  FVar2.ReferenceController = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  pFVar4 = (FConverterOperator *)0x0;
  if (this_01 != (FConverterOperator *)0x0) {
    local_60 = local_48.ObjectReference.Object;
    local_58 = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    local_48.ObjectReference.SharedReferenceCount.ReferenceController = local_18;
    local_68 = &___7__TDataWriteReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
    local_48.ObjectReference.Object = (FStereoAudioFormat *)local_28._8_8_;
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_48._padding_ = (longlong)&___7__TDataReadReference__N_Metasound__6B_;
    pFVar4 = TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::
             FConverterOperator(this_01,(TDataReadReference<bool> *)&local_48,
                                (TDataWriteReference<Metasound::FStereoAudioFormat> *)&local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd8150

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory::
CreateOperator(FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  FSharedReferencer<0> FVar2;
  FName *pFVar3;
  FConverterOperator *this_01;
  FConverterOperator *pFVar4;
  undefined **local_68;
  FMonoAudioFormat *local_60;
  TReferenceControllerBase<0> *local_58;
  TDataReference<Metasound::FMonoAudioFormat> local_48;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  TDataReference<Metasound::FMonoAudioFormat>::
  TDataReference<Metasound::FMonoAudioFormat><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_28,pFVar3,pFVar1);
  this_01 = ::operator_new(0x50);
  FVar2.ReferenceController = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  pFVar4 = (FConverterOperator *)0x0;
  if (this_01 != (FConverterOperator *)0x0) {
    local_60 = local_48.ObjectReference.Object;
    local_58 = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    local_48.ObjectReference.SharedReferenceCount.ReferenceController = local_18;
    local_68 = &___7__TDataWriteReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
    local_48.ObjectReference.Object = (FMonoAudioFormat *)local_28._8_8_;
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_48._padding_ = (longlong)&___7__TDataReadReference_M_Metasound__6B_;
    pFVar4 = TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::
             FConverterOperator(this_01,(TDataReadReference<float> *)&local_48,
                                (TDataWriteReference<Metasound::FMonoAudioFormat> *)&local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd8dd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory::
CreateOperator(FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  FSharedReferencer<0> FVar2;
  FName *pFVar3;
  FConverterOperator *this_01;
  FConverterOperator *pFVar4;
  undefined **local_68;
  FMonoAudioFormat *local_60;
  TReferenceControllerBase<0> *local_58;
  TDataReference<Metasound::FMonoAudioFormat> local_48;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  TDataReference<Metasound::FMonoAudioFormat>::
  TDataReference<Metasound::FMonoAudioFormat><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_28,pFVar3,pFVar1);
  this_01 = ::operator_new(0x50);
  FVar2.ReferenceController = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  pFVar4 = (FConverterOperator *)0x0;
  if (this_01 != (FConverterOperator *)0x0) {
    local_60 = local_48.ObjectReference.Object;
    local_58 = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    local_48.ObjectReference.SharedReferenceCount.ReferenceController = local_18;
    local_68 = &___7__TDataWriteReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
    local_48.ObjectReference.Object = (FMonoAudioFormat *)local_28._8_8_;
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_48._padding_ = (longlong)&___7__TDataReadReference_H_Metasound__6B_;
    pFVar4 = TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::
             FConverterOperator(this_01,(TDataReadReference<int> *)&local_48,
                                (TDataWriteReference<Metasound::FMonoAudioFormat> *)&local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd9210

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory::
CreateOperator(FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  FSharedReferencer<0> FVar2;
  FName *pFVar3;
  FConverterOperator *this_01;
  FConverterOperator *pFVar4;
  undefined **local_68;
  FMonoAudioFormat *local_60;
  TReferenceControllerBase<0> *local_58;
  TDataReference<Metasound::FMonoAudioFormat> local_48;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  TDataReference<Metasound::FMonoAudioFormat>::
  TDataReference<Metasound::FMonoAudioFormat><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_28,pFVar3,pFVar1);
  this_01 = ::operator_new(0x50);
  FVar2.ReferenceController = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  pFVar4 = (FConverterOperator *)0x0;
  if (this_01 != (FConverterOperator *)0x0) {
    local_60 = local_48.ObjectReference.Object;
    local_58 = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    local_48.ObjectReference.SharedReferenceCount.ReferenceController = local_18;
    local_68 = &___7__TDataWriteReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
    local_48.ObjectReference.Object = (FMonoAudioFormat *)local_28._8_8_;
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_48._padding_ = (longlong)&___7__TDataReadReference__N_Metasound__6B_;
    pFVar4 = TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::
             FConverterOperator(this_01,(TDataReadReference<bool> *)&local_48,
                                (TDataWriteReference<Metasound::FMonoAudioFormat> *)&local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b03b1b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
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
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)local_38,
             pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_M_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>
                                 *)local_58,(TDataWriteReference<float> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b03b810

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::GetInputName
                     ();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)local_38,
             pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b03bff0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
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
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar4[1]._padding_ = 0;
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::GetInputName
                     ();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)local_38,
             pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference__N_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>
                                 *)local_58,(TDataWriteReference<bool> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b03c8d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
              (pTVar4 + 1,Bell);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetInputName
                     ();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b08ff30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::FCoverterOperatorFactory::CreateOperator
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
           ::GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
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
                  ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
             ::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0908d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::FCoverterOperatorFactory::CreateOperator
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
  
  TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
  TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
            (local_48,NewObject);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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
                  ___7__TDataWriteReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
    ;
    local_48._8_8_ = local_28._8_8_;
    if ((TReferenceControllerBase<0> *)local_28._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_28._16_8_ + 8) = *(int *)(local_28._16_8_ + 8) + 1;
    }
    local_48._0_8_ = &___7__TDataReadReference_H_Metasound__6B_;
    pFVar4 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
             ::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_48,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
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

// CreateOperator @ 14b091210

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_38,
             pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)
                                local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b091590

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>(pTVar4 + 1,Hard);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)&local_78)
    ;
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b093ff0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_38,
             pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                                local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b094400

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>
              (pTVar4 + 1,Gaussian);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetInputName()
  ;
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b094c50

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0955f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (pTVar4 + 1,Peak);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f9160

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f9b60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
              (pTVar4 + 1,Sine);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fa8c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0faeb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriangleGenerationType,0>::
    TEnum<enum_Metasound::ETriangleGenerationType,0>(pTVar4 + 1,PolySmooth);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                         *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fbec0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fc3e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESquareGenerationType,0>::TEnum<enum_Metasound::ESquareGenerationType,0>
              (pTVar4 + 1,PolySmooth);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                         *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fdcf0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fea10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
              (pTVar4 + 1,PolySmooth);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b100700

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b101960

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
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
  
  TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
  TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>(local_48,NewObject);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
           GetInputName();
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
                  ___7__TDataWriteReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
    ;
    local_48._8_8_ = local_28._8_8_;
    if ((TReferenceControllerBase<0> *)local_28._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_28._16_8_ + 8) = *(int *)(local_28._16_8_ + 8) + 1;
    }
    local_48._0_8_ = &___7__TDataReadReference_H_Metasound__6B_;
    pFVar4 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_48,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                        local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)uVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b103fa0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_38,
             pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)
                                local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b105b70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>(pTVar4 + 1,Pink);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)&local_78
                       );
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b106fe0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
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
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                     local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_M_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
                                 *)local_58,(TDataWriteReference<float> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b107f10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b108f90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
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
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar4[1]._padding_ = 0;
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                     local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference__N_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
                                 *)local_58,(TDataWriteReference<bool> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b109940

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
              (pTVar4 + 1,Major);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1af940

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_38,
             pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                                local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1afb80

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>
              (pTVar4 + 1,EqualPower);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1afec0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1b0700

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
              (pTVar4 + 1,Normal);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b204390

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_38,
             pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
                                local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b204700

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
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
  
  TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
  TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>(local_48,NewObject);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetInputName();
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
                  ___7__TDataWriteReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
    ;
    local_48._8_8_ = local_28._8_8_;
    if ((TReferenceControllerBase<0> *)local_28._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_28._16_8_ + 8) = *(int *)(local_28._16_8_ + 8) + 1;
    }
    local_48._0_8_ = &___7__TDataReadReference_H_Metasound__6B_;
    pFVar4 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_48,
                        (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_68
                       );
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)uVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b205e60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b206d40

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
              (pTVar4 + 1,RisingEdge);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                        &local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2095d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
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
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                     local_38,pFVar6,pFVar1);
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
                  ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b20a360

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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
         ___7__TIntrusiveReferenceController_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriggerComparisonType,0>::TEnum<enum_Metasound::ETriggerComparisonType,0>
              (pTVar4 + 1,Equals);
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
  pFVar6 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
           GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &
               ___7__TDataWriteReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                         *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

