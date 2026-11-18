// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 21

// operator() @ 14ad9fda0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)this + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)this + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_H_Metasound__6B_;
  pFVar5 = Metasound::GetMetasoundDataTypeName<int>();
  FVar1.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar1,*pFVar5);
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
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<int>
            (&(param_1->Data).TypedValue,(TDataReadReference<int> *)local_28);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// operator() @ 14ada0500

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_const_&>
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

// operator() @ 14ada06d0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_const_&>
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

// operator() @ 14ada08a0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::<lambda_1>::
operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> **)
            this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_const_&>
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

// operator() @ 14af443f0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<int>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<int>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<int>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_const_&>(&param_1->Data,pTVar1)
  ;
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

// operator() @ 14af445c0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<float>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<float>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<float>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_const_&>
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

// operator() @ 14af44790

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>
::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> **
            )this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_const_&>
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

// operator() @ 14af44960

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_const_&>
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

// operator() @ 14af44b30

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_const_&>
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

// operator() @ 14af44d00

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_const_&>
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

// operator() @ 14af44ed0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_const_&>
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

// operator() @ 14af450a0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'::__l2
::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_const_&>
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

// operator() @ 14af45270

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>
::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_const_&>
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

// operator() @ 14af45440

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_const_&>
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

// operator() @ 14af45610

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>::
operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_const_&>
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

// operator() @ 14af457e0

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FSendAddress>_>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_const_&>
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

// operator() @ 14af459b0

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FString>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<FString>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<FString>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_const_&>
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

// operator() @ 14af45b80

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTime>_>'::
__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_const_&>
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

// operator() @ 14af45d50

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTrigger>_>'
::__l2::<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_const_&>
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

// operator() @ 14af45f20

void __thiscall
`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<bool>_>'::__l2::
<lambda_1>::operator()(void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<bool>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<bool>_> **)this;
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
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_const_&>
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

// operator() @ 14af4a6f0

FOutputBinding * __thiscall
`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_2>::
operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  FName *pFVar1;
  undefined **local_58 [2];
  FName local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_48 = *pFVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  Metasound::VertexDataPrivate::FOutputBinding::FOutputBinding
            (__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

