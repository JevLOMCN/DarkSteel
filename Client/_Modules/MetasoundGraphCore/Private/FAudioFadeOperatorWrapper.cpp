// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 11

// FAudioFadeOperatorWrapper @ 14ad37440

FAudioFadeOperatorWrapper * __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::FAudioFadeOperatorWrapper
          (FAudioFadeOperatorWrapper *this,EFadeState param_1,FOperatorSettings *param_2,
          FInputVertexInterfaceData *param_3,
          TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> param_4,
          TArrayView<FName_const_,int> *param_5,TArrayView<FName_const_,int> *param_6)

{
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  IOperator *pIVar5;
  FName *pFVar6;
  _func___cdecl_void_IOperator_ptr *p_Var7;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var8;
  IOperator IVar9;
  longlong local_38 [2];
  
  this->_padding_ = (longlong)&___7FAudioFadeOperatorWrapper_DynamicGraph_Metasound__6B_;
  pTVar1 = &(this->WrappedOperator).Operator;
  IVar9 = *param_4.Ptr;
  *param_4.Ptr = (IOperator)0x0;
  pTVar1->Ptr = (IOperator *)0x0;
  (this->WrappedOperator)._padding_ = (longlong)&___7FExecuter_Metasound__6B_;
  (this->WrappedOperator).ExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->WrappedOperator).PostExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->WrappedOperator).ResetFunction = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  if (pTVar1 != (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *)local_38)
  {
    pTVar1->Ptr = (IOperator *)IVar9;
    IVar9 = (IOperator)0x0;
  }
  (this->WrappedOperator).ExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->WrappedOperator).PostExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->WrappedOperator).ResetFunction = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  if (pTVar1->Ptr != (IOperator *)0x0) {
    p_Var7 = (_func___cdecl_void_IOperator_ptr *)(**(code **)((longlong)*pTVar1->Ptr + 0x38))();
    pIVar5 = pTVar1->Ptr;
    (this->WrappedOperator).ExecuteFunction = p_Var7;
    p_Var7 = (_func___cdecl_void_IOperator_ptr *)(**(code **)((longlong)*pIVar5 + 0x40))();
    pIVar5 = pTVar1->Ptr;
    (this->WrappedOperator).PostExecuteFunction = p_Var7;
    p_Var8 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)
             (**(code **)((longlong)*pIVar5 + 0x30))();
    (this->WrappedOperator).ResetFunction = p_Var8;
  }
  if (IVar9 != (IOperator)0x0) {
    (**(code **)*(IOperator *)IVar9)(IVar9,1);
  }
  pTVar2 = &this->InputVerticesToFade;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = param_5->ArrayNum;
  pFVar6 = param_5->DataPtr;
  piVar3 = &(this->InputVerticesToFade).ArrayMax;
  (this->InputVerticesToFade).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 3);
  }
  pTVar2 = &this->OutputVerticesToFade;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = param_6->ArrayNum;
  pFVar6 = param_6->DataPtr;
  piVar3 = &(this->OutputVerticesToFade).ArrayMax;
  (this->OutputVerticesToFade).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 3);
  }
  (this->WrappedInputAudioBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FadedInputAudioBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WrappedOutputAudioBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FadedOutputAudioBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WrappedInputAudioBuffers).ArrayNum = 0;
  (this->WrappedInputAudioBuffers).ArrayMax = 0;
  (this->FadedInputAudioBuffers).ArrayNum = 0;
  (this->FadedInputAudioBuffers).ArrayMax = 0;
  (this->WrappedOutputAudioBuffers).ArrayNum = 0;
  (this->WrappedOutputAudioBuffers).ArrayMax = 0;
  (this->FadedOutputAudioBuffers).ArrayNum = 0;
  (this->FadedOutputAudioBuffers).ArrayMax = 0;
  this->InitialFadeState = param_1;
  this->FadeState = param_1;
  InitInputBuffers(this,param_2,param_3);
  SetWrappedOperatorInputs(this,param_3);
  InitOutputBuffers(this,param_2);
  IVar9 = *param_4.Ptr;
  if (IVar9 != (IOperator)0x0) {
    (*(code *)**(undefined8 **)IVar9)(IVar9,1);
  }
  return this;
}

// BindInputs @ 14ad47df0

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::BindInputs
          (FAudioFadeOperatorWrapper *this,FInputVertexInterfaceData *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *local_res8;
  FName *local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  FScriptContainerElement **local_40;
  code *local_38;
  FName **local_30;
  
  uVar5 = 0;
  if (0 < (this->InputVerticesToFade).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->InputVerticesToFade).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (FName *)((this->InputVerticesToFade).AllocatorInstance.Data +
                        (longlong)(int)uVar5 * 8);
      uVar4 = 0;
      if ((int)uVar5 < (this->WrappedInputAudioBuffers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_40 = &local_res8;
      local_30 = &local_58;
      local_res8 = (this->WrappedInputAudioBuffers).AllocatorInstance.Data +
                   (longlong)(int)uVar5 * 0x20;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindVertex<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
                 ::Call;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
                 ::Call;
      local_58 = pFVar1;
      local_50 = local_res8;
      FInputVertexInterfaceData::Apply
                (param_1,pFVar1,
                 (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)
                 &local_38,
                 (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
                 &local_48);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->InputVerticesToFade).ArrayNum);
  }
  SetWrappedOperatorInputs(this,param_1);
  return;
}

// BindOutputs @ 14ad48130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::BindOutputs
          (FAudioFadeOperatorWrapper *this,FOutputVertexInterfaceData *param_1)

{
  FName *this_00;
  code *pcVar1;
  undefined8 uVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FAnyDataReference *this_01;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *local_res8;
  FName *local_88;
  FScriptContainerElement *local_80;
  code *local_78;
  FScriptContainerElement **local_70;
  code *local_68;
  FName **local_60;
  FString local_58;
  undefined1 local_48 [32];
  
  (**(code **)((this->WrappedOperator)._padding_ + 0x28))(&this->WrappedOperator);
  uVar10 = 0;
  if (0 < (this->OutputVerticesToFade).ArrayNum) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      uVar8 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < (this->OutputVerticesToFade).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FName *)((this->OutputVerticesToFade).AllocatorInstance.Data + lVar9 * 8);
      pFVar6 = (param_1->Bindings).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)(param_1->Bindings).ArrayNum * 0x40;
      if (pFVar6 != pFVar7) {
        do {
          if (*(FName *)(pFVar6 + 8) == *this_00) {
            this_01 = (FAnyDataReference *)0x0;
            if (pFVar6[0x38] != (FScriptContainerElement)0x0) {
              this_01 = (FAnyDataReference *)(pFVar6 + 0x20);
            }
            if (this_01 != (FAnyDataReference *)0x0) {
              FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                        (this_01,(TDataReadReference<Metasound::FAudioBuffer> *)local_48);
              uVar5 = 0;
              if ((int)uVar10 < (this->WrappedOutputAudioBuffers).ArrayNum) {
                uVar5 = uVar8;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pFVar7 = (this->WrappedOutputAudioBuffers).AllocatorInstance.Data;
              pFVar6 = pFVar7 + lVar11 + 8;
              uVar2 = *(undefined8 *)pFVar6;
              pTVar3 = *(TReferenceControllerBase<0> **)(pFVar6 + 8);
              pFVar7 = pFVar7 + lVar11 + 8;
              *(undefined8 *)pFVar7 = local_48._8_8_;
              *(undefined8 *)(pFVar7 + 8) = local_48._16_8_;
              local_48._8_8_ = uVar2;
              local_48._16_8_ = pTVar3;
              SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              goto LAB_14ad482ea;
            }
            break;
          }
          pFVar6 = pFVar6 + 0x40;
        } while (pFVar6 != pFVar7);
      }
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this_00,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
LAB_14ad482ea:
      uVar5 = 0;
      if ((int)uVar10 < (this->FadedOutputAudioBuffers).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_70 = &local_res8;
      local_res8 = (this->FadedOutputAudioBuffers).AllocatorInstance.Data + lVar11;
      local_60 = &local_88;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
                 ::Call;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindVertex<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
                 ::Call;
      local_88 = this_00;
      local_80 = local_res8;
      FOutputVertexInterfaceData::Apply
                (param_1,this_00,
                 (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)
                 &local_68,
                 (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                 &local_78);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x20;
    } while ((int)uVar10 < (this->OutputVerticesToFade).ArrayNum);
  }
  return;
}

// Execute @ 14ad4f950

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::Execute(FAudioFadeOperatorWrapper *this)

{
  _func___cdecl_void_IOperator_ptr *p_Var1;
  
  FadeBuffers(this,&this->WrappedInputAudioBuffers,&this->FadedInputAudioBuffers);
  p_Var1 = (this->WrappedOperator).ExecuteFunction;
  if (p_Var1 != (_func___cdecl_void_IOperator_ptr *)0x0) {
    (*p_Var1)((this->WrappedOperator).Operator.Ptr);
  }
  FadeBuffers(this,&this->WrappedOutputAudioBuffers,&this->FadedOutputAudioBuffers);
  if (this->FadeState == FadingIn) {
    this->FadeState = FullVolume;
    return;
  }
  if (this->FadeState == FadingOut) {
    this->FadeState = Silence;
  }
  return;
}

// FadeBuffers @ 14ad50090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::FadeBuffers
          (FAudioFadeOperatorWrapper *this,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_1,TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
                   *param_2)

{
  EFadeState EVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uStack_5c;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48 [3];
  
  fVar7 = __real_3f800000;
  EVar1 = this->FadeState;
  if (EVar1 == FadingIn) {
    iVar10 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar10) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar2 = *(undefined8 **)((param_1->AllocatorInstance).Data + lVar12 + 8);
        uVar9 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar3 = *(undefined8 **)((param_2->AllocatorInstance).Data + lVar12 + 8);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                      LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        iVar10 = *(int *)(puVar2 + 1);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != iVar10)) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        pvVar4 = (void *)*puVar2;
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        memcpy((void *)*puVar3,pvVar4,(longlong)iVar10 << 2);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        pfVar5 = (float *)*puVar3;
        iVar10 = *(int *)(puVar3 + 1);
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_58._12_4_ = uStack_5c;
        local_58.ArrayNum = iVar10;
        local_58.DataPtr = pfVar5;
        Audio::ArrayFade(&local_58,0.0,fVar7);
        iVar10 = param_1->ArrayNum;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x20;
      } while ((int)uVar11 < iVar10);
    }
  }
  else if (EVar1 == FadingOut) {
    iVar10 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar10) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar2 = *(undefined8 **)((param_1->AllocatorInstance).Data + lVar12 + 8);
        uVar9 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar3 = *(undefined8 **)((param_2->AllocatorInstance).Data + lVar12 + 8);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                      LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        iVar10 = *(int *)(puVar2 + 1);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != iVar10)) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        pvVar4 = (void *)*puVar2;
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        memcpy((void *)*puVar3,pvVar4,(longlong)iVar10 << 2);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        pfVar5 = (float *)*puVar3;
        iVar10 = *(int *)(puVar3 + 1);
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_48[0]._12_4_ = uStack_5c;
        local_48[0].ArrayNum = iVar10;
        local_48[0].DataPtr = pfVar5;
        Audio::ArrayFade(local_48,fVar7,0.0);
        iVar10 = param_1->ArrayNum;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x20;
      } while ((int)uVar11 < iVar10);
    }
  }
  else if (EVar1 == FullVolume) {
    iVar10 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar10) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar2 = *(undefined8 **)((param_1->AllocatorInstance).Data + lVar12 + 8);
        uVar9 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar3 = *(undefined8 **)((param_2->AllocatorInstance).Data + lVar12 + 8);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                      LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        iVar10 = *(int *)(puVar2 + 1);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != iVar10)) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        pvVar4 = (void *)*puVar2;
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        memcpy((void *)*puVar3,pvVar4,(longlong)iVar10 << 2);
        iVar10 = param_1->ArrayNum;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x20;
      } while ((int)uVar11 < iVar10);
    }
  }
  return;
}

// InitInputBuffers @ 14ad58600

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::InitInputBuffers
          (FAudioFadeOperatorWrapper *this,FOperatorSettings *param_1,
          FInputVertexInterfaceData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TDataReference<Metasound::FAudioBuffer> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FAnyDataReference *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TDataReference<Metasound::FAudioBuffer> local_88;
  TDataReference<Metasound::FAudioBuffer> local_68;
  undefined1 local_48 [32];
  
  pFVar10 = (this->InputVerticesToFade).AllocatorInstance.Data;
  iVar3 = (this->InputVerticesToFade).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  do {
    if ((this->InputVerticesToFade).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) {
      return;
    }
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_88,NewObject,param_1);
    pTVar4 = (TDataReference<Metasound::FAudioBuffer> *)
             (this->FadedInputAudioBuffers).AllocatorInstance.Data;
    local_88._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if (((pTVar4 <= &local_88) && (&local_88 < pTVar4 + (this->FadedInputAudioBuffers).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->FadedInputAudioBuffers).ArrayNum;
    piVar1 = &(this->FadedInputAudioBuffers).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->FadedInputAudioBuffers).AllocatorInstance,piVar1);
    }
    (this->FadedInputAudioBuffers).ArrayNum = iVar7 + 1;
    pFVar8 = (this->FadedInputAudioBuffers).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
    *(undefined ***)pFVar8 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar8 + 8) = local_88.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar8 + 0x10) =
         local_88.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_88.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_88.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_88.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)pFVar8 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_88.ObjectReference.SharedReferenceCount.ReferenceController);
    pFVar8 = (param_2->Bindings).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)(param_2->Bindings).ArrayNum * 0x58;
    if (pFVar8 != pFVar9) {
      do {
        if (*(longlong *)(pFVar8 + 8) == *(longlong *)pFVar10) {
          this_00 = (FAnyDataReference *)0x0;
          if (pFVar8[0x50] != (FScriptContainerElement)0x0) {
            this_00 = (FAnyDataReference *)(pFVar8 + 0x38);
          }
          goto LAB_14ad58768;
        }
        pFVar8 = pFVar8 + 0x58;
      } while (pFVar8 != pFVar9);
    }
    this_00 = (FAnyDataReference *)0x0;
LAB_14ad58768:
    if (this_00 == (FAnyDataReference *)0x0) {
      TDataReference<Metasound::FAudioBuffer>::
      TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
                (&local_68,NewObject,param_1);
      pTVar4 = (TDataReference<Metasound::FAudioBuffer> *)
               (this->WrappedInputAudioBuffers).AllocatorInstance.Data;
      local_68._padding_ =
           (longlong)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      if (((pTVar4 <= &local_68) && (&local_68 < pTVar4 + (this->WrappedInputAudioBuffers).ArrayMax)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->WrappedInputAudioBuffers).ArrayNum;
      piVar1 = &(this->WrappedInputAudioBuffers).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->WrappedInputAudioBuffers).AllocatorInstance,piVar1);
      }
      (this->WrappedInputAudioBuffers).ArrayNum = iVar7 + 1;
      pFVar8 = (this->WrappedInputAudioBuffers).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
      *(undefined ***)pFVar8 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(FAudioBuffer **)(pFVar8 + 8) = local_68.ObjectReference.Object;
      *(TReferenceControllerBase<0> **)(pFVar8 + 0x10) =
           local_68.ObjectReference.SharedReferenceCount.ReferenceController;
      if (local_68.ObjectReference.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<0> *)0x0) {
        (local_68.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (local_68.ObjectReference.SharedReferenceCount.ReferenceController)->
             SharedReferenceCount + 1;
      }
      *(undefined ***)pFVar8 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (local_68.ObjectReference.SharedReferenceCount.ReferenceController);
      pFVar10 = pFVar10 + 8;
    }
    else {
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (this_00,(TDataReadReference<Metasound::FAudioBuffer> *)local_48);
      pFVar8 = (this->WrappedInputAudioBuffers).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           pFVar8 + (longlong)(this->WrappedInputAudioBuffers).ArrayMax * 0x20)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->WrappedInputAudioBuffers).ArrayNum;
      piVar1 = &(this->WrappedInputAudioBuffers).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->WrappedInputAudioBuffers).AllocatorInstance,piVar1);
      }
      (this->WrappedInputAudioBuffers).ArrayNum = iVar7 + 1;
      pFVar8 = (this->WrappedInputAudioBuffers).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
      *(undefined ***)pFVar8 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(undefined8 *)(pFVar8 + 8) = local_48._8_8_;
      *(undefined8 *)(pFVar8 + 0x10) = local_48._16_8_;
      if ((TReferenceControllerBase<0> *)local_48._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_48._16_8_ + 8) = *(int *)(local_48._16_8_ + 8) + 1;
      }
      *(undefined ***)pFVar8 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_48._16_8_);
      pFVar10 = pFVar10 + 8;
    }
  } while( true );
}

// InitOutputBuffers @ 14ad58980

/* WARNING: Removing unreachable block (ram,0x00014ad58d99) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b15) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b18) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b52) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b5b) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b5f) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b64) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b7a) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b91) */
/* WARNING: Removing unreachable block (ram,0x00014ad58bdb) */
/* WARNING: Removing unreachable block (ram,0x00014ad58bdc) */
/* WARNING: Removing unreachable block (ram,0x00014ad58be8) */
/* WARNING: Removing unreachable block (ram,0x00014ad58bf6) */
/* WARNING: Removing unreachable block (ram,0x00014ad58c26) */
/* WARNING: Removing unreachable block (ram,0x00014ad58c29) */
/* WARNING: Removing unreachable block (ram,0x00014ad58b1e) */
/* WARNING: Removing unreachable block (ram,0x00014ad58db6) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::InitOutputBuffers
          (FAudioFadeOperatorWrapper *this,FOperatorSettings *param_1)

{
  int *piVar1;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FName *pFVar3;
  int iVar4;
  TDataReference<Metasound::FAudioBuffer> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  undefined1 local_res8 [8];
  TDataReference<Metasound::FAudioBuffer> local_a0;
  TDataReference<Metasound::FAudioBuffer> local_80 [2];
  FString local_40;
  
  (**(code **)((this->WrappedOperator)._padding_ + 0x28))();
  this_00 = (FName *)(this->OutputVerticesToFade).AllocatorInstance.Data;
  iVar4 = (this->OutputVerticesToFade).ArrayNum;
  pFVar3 = this_00 + iVar4;
  while( true ) {
    if ((this->OutputVerticesToFade).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) {
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>((FSubInterfaceLayout *)0x0,0)
      ;
      DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>((FOutputBinding *)0x0,0);
      return;
    }
    pTVar2 = &this->FadedOutputAudioBuffers;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_a0,NewObject,param_1);
    pTVar5 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar2->AllocatorInstance).Data;
    local_a0._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if (((pTVar5 <= &local_a0) && (&local_a0 < pTVar5 + (this->FadedOutputAudioBuffers).ArrayMax))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->FadedOutputAudioBuffers).ArrayNum;
    piVar1 = &(this->FadedOutputAudioBuffers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FadedOutputAudioBuffers).ArrayNum = iVar8 + 1;
    pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined ***)pFVar9 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar9 + 8) = local_a0.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar9 + 0x10) =
         local_a0.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_a0.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_a0.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_a0.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)pFVar9 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_a0.ObjectReference.SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(this_00,&local_40);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (local_80,NewObject,param_1);
    pTVar5 = (TDataReference<Metasound::FAudioBuffer> *)
             (this->WrappedOutputAudioBuffers).AllocatorInstance.Data;
    local_80[0]._padding_ =
         (longlong)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if (((pTVar5 <= local_80) && (local_80 < pTVar5 + (this->WrappedOutputAudioBuffers).ArrayMax))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) break;
    iVar8 = (this->WrappedOutputAudioBuffers).ArrayNum;
    piVar1 = &(this->WrappedOutputAudioBuffers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->WrappedOutputAudioBuffers).AllocatorInstance,piVar1);
    }
    (this->WrappedOutputAudioBuffers).ArrayNum = iVar8 + 1;
    pFVar9 = (this->WrappedOutputAudioBuffers).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
    *(undefined ***)pFVar9 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar9 + 8) = local_80[0].ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar9 + 0x10) =
         local_80[0].ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_80[0].ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_80[0].ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_80[0].ObjectReference.SharedReferenceCount.ReferenceController)->
           SharedReferenceCount + 1;
    }
    *(undefined ***)pFVar9 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_80[0].ObjectReference.SharedReferenceCount.ReferenceController);
    this_00 = this_00 + 1;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// PostExecute @ 14ad5b790

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::PostExecute(FAudioFadeOperatorWrapper *this)

{
  int iVar1;
  int iVar2;
  _func___cdecl_void_IOperator_ptr *p_Var3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  p_Var3 = (this->WrappedOperator).PostExecuteFunction;
  if (p_Var3 != (_func___cdecl_void_IOperator_ptr *)0x0) {
    (*p_Var3)((this->WrappedOperator).Operator.Ptr);
  }
  if (this->FadeState == Silence) {
    pFVar4 = (this->FadedInputAudioBuffers).AllocatorInstance.Data;
    iVar1 = (this->FadedInputAudioBuffers).ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->FadedInputAudioBuffers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      iVar2 = *(int *)(*(undefined8 **)(pFVar4 + 8) + 1);
      if (0 < iVar2) {
        memset((void *)**(undefined8 **)(pFVar4 + 8),0,(longlong)iVar2 << 2);
      }
      pFVar4 = pFVar4 + 0x20;
    }
    iVar1 = (this->FadedOutputAudioBuffers).ArrayNum;
    pFVar4 = (this->FadedOutputAudioBuffers).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->FadedOutputAudioBuffers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      iVar2 = *(int *)(*(undefined8 **)(pFVar4 + 8) + 1);
      if (0 < iVar2) {
        memset((void *)**(undefined8 **)(pFVar4 + 8),0,(longlong)iVar2 << 2);
      }
      pFVar4 = pFVar4 + 0x20;
    }
  }
  return;
}

// ReleaseOperator @ 14ad5e890

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::ReleaseOperator(FAudioFadeOperatorWrapper *this)

{
  int *piVar1;
  int iVar2;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar3;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar4;
  IOperator IVar5;
  IOperator *in_RDX;
  
  (this->InputVerticesToFade).ArrayNum = 0;
  if ((this->InputVerticesToFade).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->InputVerticesToFade).AllocatorInstance,0,
               &(this->InputVerticesToFade).ArrayMax);
  }
  (this->OutputVerticesToFade).ArrayNum = 0;
  if ((this->OutputVerticesToFade).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->OutputVerticesToFade).AllocatorInstance,0,
               &(this->OutputVerticesToFade).ArrayMax);
  }
  piVar1 = &(this->WrappedInputAudioBuffers).ArrayMax;
  pTVar3 = (TDataReadReference<Metasound::FAudioBuffer> *)
           (this->WrappedInputAudioBuffers).AllocatorInstance.Data;
  iVar2 = (this->WrappedInputAudioBuffers).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(pTVar3,iVar2);
    (this->WrappedInputAudioBuffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->WrappedInputAudioBuffers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(pTVar3,iVar2);
    (this->WrappedInputAudioBuffers).ArrayNum = 0;
  }
  piVar1 = &(this->FadedInputAudioBuffers).ArrayMax;
  pTVar4 = (TDataWriteReference<Metasound::FAudioBuffer> *)
           (this->FadedInputAudioBuffers).AllocatorInstance.Data;
  iVar2 = (this->FadedInputAudioBuffers).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>(pTVar4,iVar2);
    (this->FadedInputAudioBuffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->FadedInputAudioBuffers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>(pTVar4,iVar2);
    (this->FadedInputAudioBuffers).ArrayNum = 0;
  }
  piVar1 = &(this->WrappedOutputAudioBuffers).ArrayMax;
  pTVar3 = (TDataReadReference<Metasound::FAudioBuffer> *)
           (this->WrappedOutputAudioBuffers).AllocatorInstance.Data;
  iVar2 = (this->WrappedOutputAudioBuffers).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(pTVar3,iVar2);
    (this->WrappedOutputAudioBuffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->WrappedOutputAudioBuffers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(pTVar3,iVar2);
    (this->WrappedOutputAudioBuffers).ArrayNum = 0;
  }
  piVar1 = &(this->FadedOutputAudioBuffers).ArrayMax;
  pTVar4 = (TDataWriteReference<Metasound::FAudioBuffer> *)
           (this->FadedOutputAudioBuffers).AllocatorInstance.Data;
  iVar2 = (this->FadedOutputAudioBuffers).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>(pTVar4,iVar2);
    (this->FadedOutputAudioBuffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->FadedOutputAudioBuffers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>(pTVar4,iVar2);
    (this->FadedOutputAudioBuffers).ArrayNum = 0;
  }
  IVar5 = (IOperator)(this->WrappedOperator).Operator.Ptr;
  (this->WrappedOperator).ExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->WrappedOperator).PostExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->WrappedOperator).ResetFunction = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  (this->WrappedOperator).Operator.Ptr = (IOperator *)0x0;
  *in_RDX = IVar5;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)in_RDX;
}

// Reset @ 14ad62690

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::Reset
          (FAudioFadeOperatorWrapper *this,FResetParams *param_1)

{
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var1;
  
  p_Var1 = (this->WrappedOperator).ResetFunction;
  if (p_Var1 != (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0) {
    (*p_Var1)((this->WrappedOperator).Operator.Ptr,param_1);
    this->FadeState = this->InitialFadeState;
    return;
  }
  this->FadeState = this->InitialFadeState;
  return;
}

// SetWrappedOperatorInputs @ 14ad64c90

void __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::SetWrappedOperatorInputs
          (FAudioFadeOperatorWrapper *this,FInputVertexInterfaceData *param_1)

{
  int iVar1;
  FInputBinding *pFVar2;
  FSubInterfaceLayout *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FAnyDataReference local_68;
  bool local_50 [8];
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> local_48;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  iVar1 = (param_1->Bindings).ArrayNum;
  uVar10 = 0;
  local_50[0] = param_1->bIsVertexInterfaceFrozen;
  pFVar2 = (FInputBinding *)(param_1->Bindings).AllocatorInstance.Data;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,0,&local_48.AllocatorInstance,iVar1,&local_48.ArrayMax);
    ConstructItems<Metasound::VertexDataPrivate::FInputBinding,Metasound::VertexDataPrivate::FInputBinding,int>
              (local_48.AllocatorInstance.Data,pFVar2,iVar1);
  }
  iVar1 = (param_1->SubInterfaces).ArrayNum;
  pFVar3 = (FSubInterfaceLayout *)(param_1->SubInterfaces).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,0,&local_38,iVar1,&local_2c);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              (local_38.Data,pFVar3,iVar1);
  }
  uVar11 = uVar10;
  uVar12 = uVar10;
  if (0 < (this->InputVerticesToFade).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (this->InputVerticesToFade).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->InputVerticesToFade).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar9 < (this->FadedInputAudioBuffers).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = (this->FadedInputAudioBuffers).AllocatorInstance.Data + uVar12;
      local_68._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      local_68.AccessType = Write;
      (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,&local_68.DataRefPtr);
      if ((local_68.DataRefPtr.Ptr == (IDataReference *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DataRefPtr.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                             ,0x30e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_68._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FInputBinding>
                (local_50[0],&local_48,(FName *)(pFVar4 + uVar11 * 8),&local_68);
      if (local_68.DataRefPtr.Ptr != (IDataReference *)0x0) {
        (**(code **)*local_68.DataRefPtr.Ptr)(local_68.DataRefPtr.Ptr,1);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 0x20;
    } while ((int)(uVar9 + 1) < (this->InputVerticesToFade).ArrayNum);
  }
  (**(code **)((this->WrappedOperator)._padding_ + 0x20))(&this->WrappedOperator,local_50);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_38.Data,local_30);
  if ((FSubInterfaceLayout *)local_38.Data != (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_38.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FInputBinding *)local_48.AllocatorInstance.Data != (FInputBinding *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

