// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 28

// operator() @ 14affcfd0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)this + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)this + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_M_Metasound__6B_;
  pFVar4 = Metasound::GetMetasoundDataTypeName<float>();
  FVar1.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar3 = Metasound::IsCastable(FVar1,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::Emplace<Metasound::TDataReadReference<float>_const_&>
            (&param_1->Data,(TDataReadReference<float> *)local_28);
  if ((param_1->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// operator() @ 14affd4b0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>::
operator()(void *this,FOutputBinding *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)this + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)this + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  pFVar4 = Metasound::GetMetasoundDataTypeName<Metasound::FTime>();
  FVar1.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar3 = Metasound::IsCastable(FVar1,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataReadReference<Metasound::FTime>_const_&>
            (&param_1->Data,(TDataReadReference<Metasound::FTime> *)local_28);
  if ((param_1->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// operator() @ 14affd590

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)this + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)this + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference__N_Metasound__6B_;
  pFVar4 = Metasound::GetMetasoundDataTypeName<bool>();
  FVar1.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar3 = Metasound::IsCastable(FVar1,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::Emplace<Metasound::TDataReadReference<bool>_const_&>
            (&param_1->Data,(TDataReadReference<bool> *)local_28);
  if ((param_1->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// operator() @ 14affd790

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14affd960

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::__l2
::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14affdb30

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14affdd00

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b054cd0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>::
operator()(void *this,FOutputBinding *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)this + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)this + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pFVar4 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FVar1.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar3 = Metasound::IsCastable(FVar1,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataReadReference<Metasound::FAudioBuffer>_const_&>
            (&param_1->Data,(TDataReadReference<Metasound::FAudioBuffer> *)local_28);
  if ((param_1->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// operator() @ 14b054db0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>::
operator()(void *this,FOutputBinding *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)this + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)this + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  pFVar4 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  FVar1.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar3 = Metasound::IsCastable(FVar1,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataReadReference<Metasound::FTrigger>_const_&>
            (&param_1->Data,(TDataReadReference<Metasound::FTrigger> *)local_28);
  if ((param_1->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// operator() @ 14b054fb0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> *pTVar1
  ;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b0b6870

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b0b6a40

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'::
__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b0b6c10

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b0b6de0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b1456f0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)this + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)this + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar4 = Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  FVar1.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar3 = Metasound::IsCastable(FVar1,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_const_&>
            (&param_1->Data,
             (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28);
  if ((param_1->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// operator() @ 14b145ff0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'::
__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b1461c0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b146390

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'::
__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b146560

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'::
__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b146730

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b146900

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b146ad0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::__l2
::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b1d0440

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b1d0610

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::__l2
::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b237d70

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)this + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)this + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFString___Metasound__6B_;
  pFVar4 = Metasound::GetMetasoundDataTypeName<FString>();
  FVar1.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar3 = Metasound::IsCastable(FVar1,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::Emplace<Metasound::TDataReadReference<FString>_const_&>
            (&param_1->Data,(TDataReadReference<FString> *)local_28);
  if ((param_1->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// operator() @ 14b237f70

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'::
__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b238140

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14b238310

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
             **)this;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_const_&>
            (&param_1->Data,pTVar1);
  if ((param_1->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

