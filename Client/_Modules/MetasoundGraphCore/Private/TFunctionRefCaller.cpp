// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 26

// Call @ 14ad49e40

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14ad49e70

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14ad49ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindVertex<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong *plVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  FName *pFVar9;
  undefined1 auStack_28 [32];
  
  plVar1 = *(longlong **)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<Metasound::FAudioBuffer> *)auStack_28);
    lVar4 = plVar1[1];
    lVar5 = plVar1[2];
    lVar6 = *(longlong *)&pTVar8->field_0x10;
    plVar1[1] = *(longlong *)&pTVar8->field_0x8;
    plVar1[2] = lVar6;
    *(longlong *)&pTVar8->field_0x8 = lVar4;
    *(longlong *)&pTVar8->field_0x10 = lVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  pFVar9 = (FName *)(**(code **)(*plVar1 + 8))(plVar1);
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  (param_2->Data).TypedValue.AccessType = Read;
  (param_2->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*plVar1 + 0x18))(plVar1,&(param_2->Data).TypedValue.DataRefPtr);
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (param_2->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14ad49eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindVertex<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar1;
  FName FVar2;
  IDataReference *pIVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  
  pTVar1 = *(TDataWriteReference<Metasound::FAudioBuffer> **)param_1;
  pFVar6 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar5 = Metasound::IsCastable(FVar2,*pFVar6);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar3 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar3 != (IDataReference *)0x0)) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FAudioBuffer>
            (&(param_2->Data).TypedValue,pTVar1);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14ad49ec0

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::AddInputDataDestination'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  `Metasound::DynamicGraph::FDynamicOperatorTransactor::AddInputDataDestination'::__l2::<lambda_1>::
  operator()(param_2,param_1);
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad49ef0

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::AddOutputDataSource'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)&(param_2->OperatorSettings).ActualBlockRate;
  puVar2 = *(undefined8 **)&param_2->OperatorSettings;
  puVar4 = ::operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
    *puVar4 = &___7FAddOutput_DynamicGraph_Metasound__6B_;
    puVar4[1] = uVar3;
    puVar4[2] = *puVar1;
    *(undefined8 **)param_1 = puVar4;
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad49f70

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  `Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14ad49fa0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindVertex'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  `Metasound::FOutputVertexInterfaceData::BindVertex'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14ad49fd0

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueAddEdgeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  `Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueAddEdgeOperatorTransform'::__l2::
  <lambda_1>::operator()(param_2,param_1);
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a000

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  `Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::
  <lambda_1>::operator()(param_2,param_1);
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a030

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)&param_2->OperatorSettings;
  puVar3 = ::operator_new(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    *puVar3 = &___7FEndAudioFadeTransform_DynamicGraph_Metasound__6B_;
    puVar3[1] = uVar2;
    *(undefined8 **)param_1 = puVar3;
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a090

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueFadeAndAddEdgeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  `Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueFadeAndAddEdgeOperatorTransform'::
  __l2::<lambda_1>::operator()(param_2,param_1);
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a0c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueInsertOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  undefined4 uVar1;
  FMetasoundEnvironment *in_R8;
  
  uVar1 = (param_2->OperatorSettings).ActualBlockRate;
  Metasound::DynamicGraph::FDynamicOperatorTransactor::CreateInsertOperatorTransform
            (*(FDynamicOperatorTransactor **)&param_2->OperatorSettings,param_1,uVar1,
             (FOperatorSettings *)
             (ulonglong)*(uint *)(param_2->Environment).Variables.Pairs.AllocatorInstance.Data,in_R8
             ,(FGraphRenderCost *)(in_R8 + 1));
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a110

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  `Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform'::__l2::
  <lambda_1>::operator()(param_2,param_1);
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a140

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform_Deprecated'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  `Metasound::DynamicGraph::FDynamicOperatorTransactor::
  EnqueueRemoveEdgeOperatorTransform_Deprecated'::__l2::<lambda_1>::operator()(param_2,param_1);
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a170

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  `Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveOperatorTransform'::__l2::
  <lambda_1>::operator()(param_2,param_1);
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a1a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::FindSubInterfaceReferences'::__l2::<lambda_1>,void,unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const_&>
::Call(void *param_1,uint *param_2,FInputBinding *param_3)

{
  `Metasound::FInputVertexInterfaceData::FindSubInterfaceReferences'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14ad4a1b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::FindSubInterfaceReferences'::__l2::<lambda_1>,void,unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const_&>
::Call(void *param_1,uint *param_2,FOutputBinding *param_3)

{
  `Metasound::FOutputVertexInterfaceData::FindSubInterfaceReferences'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14ad4a1c0

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveInputDataDestination'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)&param_2->OperatorSettings;
  puVar2 = ::operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)param_1 = puVar2;
    *puVar2 = &___7FRemoveInput_DynamicGraph_Metasound__6B_;
    puVar2[1] = *puVar1;
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a220

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveOutputDataSource'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)&param_2->OperatorSettings;
  puVar2 = ::operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)param_1 = puVar2;
    *puVar2 = &___7FRemoveOutput_DynamicGraph_Metasound__6B_;
    puVar2[1] = *puVar1;
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a280

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  `Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue'::__l2::<lambda_1>::operator()
            (param_2,param_1);
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a2b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
         ::Call(void *param_1,FDynamicOperatorInfo *param_2)

{
  FMetasoundEnvironment *in_R8;
  
  Metasound::DynamicGraph::FDynamicOperatorTransactor::CreateInsertOperatorTransform
            (*(FDynamicOperatorTransactor **)&param_2->OperatorSettings,param_1,
             (int)**(undefined8 **)&(param_2->OperatorSettings).ActualBlockRate,
             (FOperatorSettings *)
             (ulonglong)*(uint *)(param_2->Environment).Variables.Pairs.AllocatorInstance.Data,in_R8
             ,(FGraphRenderCost *)(in_R8 + 1));
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )param_1;
}

// Call @ 14ad4a310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::DirectedGraphAlgo::FindReachableNodesFromInput'::__l6::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = *param_2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)param_1,local_res18,
             (bool *)local_res10);
  return true;
}

// Call @ 14ad4a350

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::DirectedGraphAlgo::FindReachableNodesFromOutput'::__l6::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = *param_2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)param_1,local_res18,
             (bool *)local_res10);
  return true;
}

// Call @ 14ad4a390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *pTVar1;
  EDataReferenceAccessType EVar2;
  FAnyDataReference *pFVar3;
  IDataReference *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 *puStackX_8;
  longlong *aplStack_18 [2];
  
  pFVar3 = *(FAnyDataReference **)param_1;
  if ((param_2->Data).bIsSet == false) {
    Metasound::VertexDataPrivate::FInputBinding::Set<Metasound::FAnyDataReference>(param_2,pFVar3);
    return;
  }
  pIVar4 = (param_2->Data).TypedValue.DataRefPtr.Ptr;
  EVar2 = (param_2->Data).TypedValue.AccessType;
  (**(code **)((longlong)*pIVar4 + 0x18))
            (pIVar4,aplStack_18,in_R8,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if (aplStack_18[0] == (longlong *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (EVar2 == None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3->AccessType = EVar2;
  puVar7 = (undefined8 *)(**(code **)(*aplStack_18[0] + 0x18))(aplStack_18[0],&puStackX_8);
  pTVar1 = &pFVar3->DataRefPtr;
  if (pTVar1 != (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *)
                puVar7) {
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IDataReference *)*puVar7;
    *puVar7 = 0;
    if (pIVar4 != (IDataReference *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
  }
  if (puStackX_8 != (undefined8 *)0x0) {
    (**(code **)*puStackX_8)(puStackX_8,1);
  }
  if (pTVar1->Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x334,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pFVar3->AccessType == None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != AccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x335,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (aplStack_18[0] != (longlong *)0x0) {
    (**(code **)*aplStack_18[0])(aplStack_18[0],1);
    return;
  }
  return;
}

// Call @ 14ad4a3a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindVertex'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  Metasound::VertexDataPrivate::FOutputBinding::Set<Metasound::FAnyDataReference>
            (param_2,*(FAnyDataReference **)param_1);
  return;
}

