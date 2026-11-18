// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 2

// ~FProxy @ 14eb06e50

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy::~FProxy(FProxy *this)

{
  Session *pSVar1;
  FScriptContainerElement *pFVar2;
  SessionOptions *pSVar3;
  char cVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  
  pSVar1 = (this->Session).Ptr;
  if (pSVar1 != (Session *)0x0) {
    (this->Session).Ptr = (Session *)0x0;
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
    ::operator_delete(pSVar1,8);
  }
  if (1 < (this->TempDirForModelWithExternalData).Data.ArrayNum) {
    pIVar5 = IFileManager::Get();
    if ((this->TempDirForModelWithExternalData).Data.ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar5 + 0x68))(pIVar5,pwVar6,0,1);
    if ((cVar4 == '\0') && (2 < (byte)LogNNERuntimeORT._0_1_)) {
      Logging::Private::BasicLog<3>
                (&`public:___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy::~FProxy(void)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->OutputTensorShapes).AllocatorInstance.Data,
             (this->OutputTensorShapes).ArrayNum);
  pFVar2 = (this->OutputTensorShapes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            ((FTensor *)(this->OutputTensors).AllocatorInstance.Data,(this->OutputTensors).ArrayNum)
  ;
  pFVar2 = (this->OutputTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)
             (this->OutputSymbolicDimensionNames).AllocatorInstance.Data,
             (this->OutputSymbolicDimensionNames).ArrayNum);
  pFVar2 = (this->OutputSymbolicDimensionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)
             (this->InputSymbolicDimensionNames).AllocatorInstance.Data,
             (this->InputSymbolicDimensionNames).ArrayNum);
  pFVar2 = (this->InputSymbolicDimensionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputTensorNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputTensorNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            ((unique_ptr<char,Ort::detail::AllocatedFree> *)
             (this->OutputTensorNameValues).AllocatorInstance.Data,
             (this->OutputTensorNameValues).ArrayNum);
  pFVar2 = (this->OutputTensorNameValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            ((unique_ptr<char,Ort::detail::AllocatedFree> *)
             (this->InputTensorNameValues).AllocatorInstance.Data,
             (this->InputTensorNameValues).ArrayNum);
  pFVar2 = (this->InputTensorNameValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputTensorsORTType).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputTensorsORTType).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->OutputSymbolicTensors).AllocatorInstance.Data,
             (this->OutputSymbolicTensors).ArrayNum);
  pFVar2 = (this->OutputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data,
             (this->InputSymbolicTensors).ArrayNum);
  pFVar2 = (this->InputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ::operator_delete((this->Allocator).Ptr,8);
  pSVar3 = (this->SessionOptions).Ptr;
  if (pSVar3 != (SessionOptions *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSessionOptions)((OrtSessionOptions *)*pSVar3);
    ::operator_delete(pSVar3,8);
  }
  pSVar1 = (this->Session).Ptr;
  if (pSVar1 != (Session *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
    ::operator_delete(pSVar1,8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelData).SharedReferenceCount.ReferenceController);
  return;
}

// ConfigureTensors @ 14eb0e660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy::ConfigureTensors
          (FProxy *this,bool param_1)

{
  int *piVar1;
  Session SVar2;
  FTensorDesc *pFVar3;
  AllocatorWithDefaultOptions AVar4;
  char *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  ulong64 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<ONNXTensorElementDataType,TSizedDefaultAllocator<32>_> *pTVar15;
  OrtTensorTypeAndShapeInfo *pOVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  OrtStatus *pOVar22;
  char **ppcVar23;
  OrtTypeInfo **ppOVar24;
  TypeInfoORT *pTVar25;
  long64 *plVar26;
  ulong64 uVar27;
  long64 *plVar28;
  long64 *plVar29;
  FScriptContainerElement *pFVar30;
  ForElementType<int> FVar31;
  FString *pFVar32;
  uint uVar33;
  TArray<char_*,TSizedDefaultAllocator<32>_> *pTVar34;
  long64 *plVar35;
  OrtTypeInfo *pOVar36;
  TArray<std::unique_ptr<char,Ort::detail::AllocatedFree>,TSizedDefaultAllocator<32>_> *pTVar37;
  ulonglong uVar38;
  TArray<UE::NNE::FTensorDesc,TSizedDefaultAllocator<32>_> *pTVar39;
  longlong lVar40;
  FScriptContainerElement *pFVar41;
  bool bVar42;
  undefined1 auStackY_318 [32];
  undefined4 local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  char **local_2b0;
  ONNXTensorElementDataType local_2a8;
  ONNXTensorElementDataType local_2a4;
  TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_2a0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_298;
  char **local_290;
  TArray<ONNXTensorElementDataType,TSizedDefaultAllocator<32>_> *local_288;
  TArray<char_*,TSizedDefaultAllocator<32>_> *local_280;
  longlong local_278;
  TArray<UE::NNE::FTensorDesc,TSizedDefaultAllocator<32>_> *local_270;
  TArray<std::unique_ptr<char,Ort::detail::AllocatedFree>,TSizedDefaultAllocator<32>_> *local_268;
  AllocatorWithDefaultOptions local_260;
  char *local_258;
  AllocatorWithDefaultOptions local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  OrtTypeInfo *local_230;
  OrtTypeInfo *local_228;
  OrtTypeInfo *local_220;
  OrtTypeInfo *local_218;
  OrtTensorTypeAndShapeInfo *local_210;
  ulonglong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  int *local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  int *local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 local_180;
  FProxy *local_178;
  uint local_170 [2];
  uint local_168 [4];
  ForElementType<int> local_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  FString local_138;
  TArrayView<int_const_,int> local_128;
  FString local_118;
  TypeInfoORT local_108;
  ForElementType<int> local_f8;
  int local_d0;
  int local_cc;
  FTensorDesc local_c8;
  FSymbolicTensorShape local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  local_178 = this;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Magenta,"FModelInstanceORTDmlRDG::ConfigureTensors");
  bVar42 = -1 < CpuChannel->Enabled;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy::ConfigureTensors(bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId611,"FModelInstanceORTDmlRDG::ConfigureTensors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x263);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy::ConfigureTensors(bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId611);
  }
  SVar2 = *(this->Session).Ptr;
  if (param_1) {
    pOVar22 = (*Ort::Global<void>::api_->SessionGetInputCount)
                        ((OrtSession *)SVar2,(ulong64 *)local_170);
    Ort::ThrowOnError(pOVar22);
    local_2a0 = &this->InputSymbolicDimensionNames;
    pTVar37 = &this->InputTensorNameValues;
    local_288 = &this->InputTensorsORTType;
    pTVar34 = &this->InputTensorNames;
    uVar21 = local_170[0];
  }
  else {
    pOVar22 = (*Ort::Global<void>::api_->SessionGetOutputCount)
                        ((OrtSession *)SVar2,(ulong64 *)local_168);
    Ort::ThrowOnError(pOVar22);
    local_2a0 = &this->OutputSymbolicDimensionNames;
    pTVar37 = &this->OutputTensorNameValues;
    local_288 = &this->OutputTensorsORTType;
    pTVar34 = &this->OutputTensorNames;
    uVar21 = local_168[0];
  }
  pTVar39 = &this->InputSymbolicTensors + ((ulonglong)param_1 ^ 1);
  pFVar3 = (FTensorDesc *)(pTVar39->AllocatorInstance).Data;
  local_2b4 = uVar21;
  local_280 = pTVar34;
  local_270 = pTVar39;
  local_268 = pTVar37;
  if (pTVar39->ArrayMax < 0) {
    DestructItems<UE::NNE::FTensorDesc,int>(pFVar3,pTVar39->ArrayNum);
    pTVar39->ArrayNum = 0;
    if (pTVar39->ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&pTVar39->AllocatorInstance,0,&pTVar39->ArrayMax);
    }
  }
  else {
    DestructItems<UE::NNE::FTensorDesc,int>(pFVar3,pTVar39->ArrayNum);
    pTVar39->ArrayNum = 0;
  }
  local_288->ArrayNum = 0;
  if (local_288->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_288->AllocatorInstance,0,&local_288->ArrayMax);
  }
  piVar1 = &pTVar37->ArrayMax;
  pFVar30 = (pTVar37->AllocatorInstance).Data;
  if (*piVar1 < 0) {
    DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
              ((unique_ptr<char,Ort::detail::AllocatedFree> *)pFVar30,pTVar37->ArrayNum);
    pTVar37->ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar37->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
              ((unique_ptr<char,Ort::detail::AllocatedFree> *)pFVar30,pTVar37->ArrayNum);
    pTVar37->ArrayNum = 0;
  }
  pTVar34->ArrayNum = 0;
  if (pTVar34->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar34->AllocatorInstance,0,&pTVar34->ArrayMax);
  }
  this_00 = local_2a0;
  iVar20 = local_2a0->ArrayNum;
  local_1d8 = &local_2a0->ArrayNum;
  if (iVar20 < (int)uVar21) {
    iVar19 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar21 - iVar20,&local_2a0->AllocatorInstance,local_1d8,
                        &local_2a0->ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar19 * 0x10,0,
           (longlong)(int)(uVar21 - iVar20) << 4);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((int)uVar21 < iVar20) {
      uVar33 = iVar20 - uVar21;
      if (((int)(uVar33 | uVar21) < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      if (uVar33 != 0) {
        TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,uVar21,uVar33);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
      }
    }
  }
  local_2bc = 0;
  if (uVar21 != 0) {
    do {
      uVar38 = (ulonglong)local_2bc;
      SVar2 = *(this->Session).Ptr;
      AVar4 = *(this->Allocator).Ptr;
      if (param_1) {
        bVar11 = true;
        pOVar22 = (*Ort::Global<void>::api_->SessionGetInputName)
                            ((OrtSession *)SVar2,uVar38,(OrtAllocator *)AVar4,&local_240);
        Ort::ThrowOnError(pOVar22);
        local_248 = local_240;
        ppcVar23 = &local_248;
        local_250 = AVar4;
      }
      else {
        bVar10 = true;
        pOVar22 = (*Ort::Global<void>::api_->SessionGetOutputName)
                            ((OrtSession *)SVar2,uVar38,(OrtAllocator *)AVar4,&local_238);
        Ort::ThrowOnError(pOVar22);
        local_258 = local_238;
        ppcVar23 = &local_258;
        local_260 = AVar4;
      }
      pcVar5 = *ppcVar23;
      *ppcVar23 = (char *)0x0;
      if ((bVar10) && (bVar10 = false, local_258 != (char *)0x0)) {
        (**(code **)((longlong)local_260 + 0x10))((OrtAllocator *)local_260,local_258);
      }
      if ((bVar11) && (bVar11 = false, local_248 != (char *)0x0)) {
        (**(code **)((longlong)local_250 + 0x10))((OrtAllocator *)local_250,local_248);
      }
      iVar20 = pTVar37->ArrayNum;
      if (iVar20 == pTVar37->ArrayMax) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar37->AllocatorInstance,&pTVar37->ArrayMax);
      }
      pTVar37->ArrayNum = iVar20 + 1;
      pFVar30 = (pTVar37->AllocatorInstance).Data;
      *(AllocatorWithDefaultOptions *)(pFVar30 + (longlong)iVar20 * 0x10) = AVar4;
      *(char **)(pFVar30 + (longlong)iVar20 * 0x10 + 8) = pcVar5;
      uVar33 = pTVar37->ArrayNum - 1;
      uVar21 = 0;
      if ((int)uVar33 < pTVar37->ArrayNum) {
        uVar21 = ~uVar33 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      pTVar34 = local_280;
      uVar6 = *(undefined8 *)
               ((pTVar37->AllocatorInstance).Data + (longlong)pTVar37->ArrayNum * 0x10 + -8);
      iVar20 = local_280->ArrayNum;
      if (iVar20 == local_280->ArrayMax) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_280->AllocatorInstance,&local_280->ArrayMax);
      }
      pTVar34->ArrayNum = iVar20 + 1;
      *(undefined8 *)((pTVar34->AllocatorInstance).Data + (longlong)iVar20 * 8) = uVar6;
      SVar2 = *(this->Session).Ptr;
      if (param_1) {
        bVar13 = true;
        pOVar22 = (*Ort::Global<void>::api_->SessionGetInputTypeInfo)
                            ((OrtSession *)SVar2,uVar38,&local_230);
        Ort::ThrowOnError(pOVar22);
        ppOVar24 = &local_218;
        pOVar36 = local_230;
      }
      else {
        bVar12 = true;
        pOVar22 = (*Ort::Global<void>::api_->SessionGetOutputTypeInfo)
                            ((OrtSession *)SVar2,uVar38,&local_228);
        Ort::ThrowOnError(pOVar22);
        ppOVar24 = &local_220;
        pOVar36 = local_228;
      }
      plVar26 = (long64 *)0x0;
      *ppOVar24 = (OrtTypeInfo *)0x0;
      if (bVar12) {
        bVar12 = false;
        (*Ort::Global<void>::api_->ReleaseTypeInfo)(local_220);
      }
      if (bVar13) {
        bVar13 = false;
        (*Ort::Global<void>::api_->ReleaseTypeInfo)(local_218);
      }
      pOVar22 = (*Ort::Global<void>::api_->CastTypeInfoToTensorInfo)(pOVar36,&local_210);
      Ort::ThrowOnError(pOVar22);
      pOVar16 = local_210;
      pOVar22 = (*Ort::Global<void>::api_->GetTensorElementType)(local_210,&local_2a8);
      Ort::ThrowOnError(pOVar22);
      local_2a4 = local_2a8;
      pTVar25 = TranslateTensorTypeORTToNNE(&local_108,local_2a8);
      local_1f8 = 0;
      uVar6 = *(undefined8 *)pTVar25;
      uVar9 = pTVar25->ElementSize;
      pOVar22 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar16,&local_208);
      Ort::ThrowOnError(pOVar22);
      uVar38 = local_208;
      plVar28 = plVar26;
      plVar29 = plVar26;
      if (local_208 != 0) {
        if (0x1fffffffffffffff < local_208) goto LAB_14eb0f97b;
        uVar27 = local_208 * 8;
        plVar26 = std::_Allocate<16,std::_Default_allocate_traits>(uVar27);
        plVar29 = plVar26 + uVar38;
        local_200 = 0;
        iVar20 = memcmp(&local_1f8,&local_200,8);
        if (iVar20 == 0) {
          memset(plVar26,0,uVar27);
          plVar28 = plVar29;
        }
        else {
          plVar28 = plVar26;
          if (uVar38 != 0) {
            memset(plVar26,0,uVar38 << 3);
            plVar28 = plVar29;
          }
        }
      }
      uVar38 = (longlong)plVar28 - (longlong)plVar26 >> 3;
      pOVar22 = (*Ort::Global<void>::api_->GetDimensions)(pOVar16,plVar26,uVar38);
      Ort::ThrowOnError(pOVar22);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar38;
      uVar27 = SUB168(ZEXT816(8) * auVar8,0);
      if (SUB168(ZEXT816(8) * auVar8,8) != 0) {
        uVar27 = 0xffffffffffffffff;
      }
      local_2b0 = operator_new__(uVar27);
      if (local_2b0 == (char **)0x0) {
        local_2b0 = (char **)0x0;
      }
      else {
        memset(local_2b0,0,uVar27);
      }
      plVar28 = (long64 *)0x0;
      if (plVar26 != (long64 *)0x0) {
        uVar27 = (longlong)plVar29 - (longlong)plVar26 & 0xfffffffffffffff8;
        plVar29 = plVar26;
        if (0xfff < uVar27) {
          plVar29 = (long64 *)plVar26[-1];
          uVar27 = uVar27 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar26 + (-8 - (longlong)plVar29))) goto LAB_14eb0f909;
        }
        ::operator_delete(plVar29,uVar27);
      }
      local_1e0 = 0;
      pOVar22 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar16,&local_1f0);
      Ort::ThrowOnError(pOVar22);
      uVar38 = local_1f0;
      plVar29 = plVar28;
      plVar26 = plVar28;
      if (local_1f0 != 0) {
        if (0x1fffffffffffffff < local_1f0) goto LAB_14eb0f97b;
        uVar27 = local_1f0 * 8;
        plVar28 = std::_Allocate<16,std::_Default_allocate_traits>(uVar27);
        plVar26 = plVar28 + uVar38;
        local_1e8 = 0;
        iVar20 = memcmp(&local_1e0,&local_1e8,8);
        if (iVar20 == 0) {
          memset(plVar28,0,uVar27);
          plVar29 = plVar26;
        }
        else {
          plVar29 = plVar28;
          if (uVar38 != 0) {
            memset(plVar28,0,uVar38 << 3);
            plVar29 = plVar26;
          }
        }
      }
      uVar27 = (longlong)plVar29 - (longlong)plVar28 >> 3;
      pOVar22 = (*Ort::Global<void>::api_->GetDimensions)(pOVar16,plVar28,uVar27);
      Ort::ThrowOnError(pOVar22);
      pOVar22 = (*Ort::Global<void>::api_->GetSymbolicDimensions)(pOVar16,local_2b0,uVar27);
      Ort::ThrowOnError(pOVar22);
      if (plVar28 != (long64 *)0x0) {
        uVar27 = (longlong)plVar26 - (longlong)plVar28 & 0xfffffffffffffff8;
        plVar26 = plVar28;
        if (0xfff < uVar27) {
          plVar26 = (long64 *)plVar28[-1];
          uVar27 = uVar27 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar28 + (-8 - (longlong)plVar26))) goto LAB_14eb0f909;
        }
        ::operator_delete(plVar26,uVar27);
      }
      lVar40 = (longlong)(int)local_2bc;
      plVar26 = (long64 *)0x0;
      uVar21 = 0;
      if ((int)local_2bc < *local_1d8) {
        uVar21 = ~local_2bc >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      local_1c0 = 0;
      local_298 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                  ((local_2a0->AllocatorInstance).Data + lVar40 * 0x10);
      pOVar22 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar16,&local_1d0);
      Ort::ThrowOnError(pOVar22);
      uVar38 = local_1d0;
      plVar29 = plVar26;
      plVar28 = plVar26;
      if (local_1d0 != 0) {
        if (0x1fffffffffffffff < local_1d0) goto LAB_14eb0f97b;
        uVar27 = local_1d0 * 8;
        plVar29 = std::_Allocate<16,std::_Default_allocate_traits>(uVar27);
        plVar26 = plVar29 + uVar38;
        local_1c8 = 0;
        iVar20 = memcmp(&local_1c0,&local_1c8,8);
        if (iVar20 == 0) {
          memset(plVar29,0,uVar27);
          plVar28 = plVar26;
        }
        else {
          plVar28 = plVar29;
          if (uVar38 != 0) {
            memset(plVar29,0,uVar38 << 3);
            plVar28 = plVar26;
          }
        }
      }
      uVar38 = (longlong)plVar28 - (longlong)plVar29 >> 3;
      pOVar22 = (*Ort::Global<void>::api_->GetDimensions)(pOVar16,plVar29,uVar38);
      Ort::ThrowOnError(pOVar22);
      pTVar14 = local_298;
      iVar20 = local_298->ArrayNum;
      local_1b0 = &local_298->ArrayNum;
      uVar21 = (uint)uVar38;
      if (iVar20 < (int)uVar21) {
        iVar19 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar21 - iVar20,&local_298->AllocatorInstance,local_1b0,
                            &local_298->ArrayMax);
        memset((pTVar14->AllocatorInstance).Data + (longlong)iVar19 * 0x10,0,
               (longlong)(int)(uVar21 - iVar20) << 4);
      }
      else {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(uVar38 & 0xffffffff);
        }
        if ((int)uVar21 < iVar20) {
          uVar33 = iVar20 - uVar21;
          if (((int)(uVar33 | uVar21) < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar17)) {
            pcVar7 = (code *)swi(3);
            uVar18 = (*pcVar7)();
            return (bool)uVar18;
          }
          pTVar14 = local_298;
          if (uVar33 != 0) {
            TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(local_298,uVar21,uVar33);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&pTVar14->AllocatorInstance,pTVar14->ArrayNum,&pTVar14->ArrayMax);
          }
        }
      }
      if (plVar29 != (long64 *)0x0) {
        uVar27 = (longlong)plVar26 - (longlong)plVar29 & 0xfffffffffffffff8;
        plVar26 = plVar29;
        if (0xfff < uVar27) {
          plVar26 = (long64 *)plVar29[-1];
          uVar27 = uVar27 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar29 + (-8 - (longlong)plVar26))) goto LAB_14eb0f909;
        }
        ::operator_delete(plVar26,uVar27);
      }
      local_2b8 = 0;
      local_278 = 0;
      local_290 = local_2b0;
      while( true ) {
        plVar29 = (long64 *)0x0;
        local_148 = 0;
        pOVar22 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar16,&local_1b8);
        Ort::ThrowOnError(pOVar22);
        uVar38 = local_1b8;
        plVar26 = plVar29;
        if (local_1b8 != 0) {
          if (0x1fffffffffffffff < local_1b8) goto LAB_14eb0f97b;
          uVar27 = local_1b8 * 8;
          plVar29 = std::_Allocate<16,std::_Default_allocate_traits>(uVar27);
          plVar26 = plVar29 + uVar38;
          local_140 = 0;
          memset(plVar29,0,uVar27);
        }
        uVar38 = (longlong)plVar26 - (longlong)plVar29 >> 3;
        pOVar22 = (*Ort::Global<void>::api_->GetDimensions)(pOVar16,plVar29,uVar38);
        Ort::ThrowOnError(pOVar22);
        if (plVar29 != (long64 *)0x0) {
          uVar27 = (longlong)plVar26 - (longlong)plVar29 & 0xfffffffffffffff8;
          plVar26 = plVar29;
          if (0xfff < uVar27) {
            plVar26 = (long64 *)plVar29[-1];
            uVar27 = uVar27 + 0x27;
            if (0x1f < (ulonglong)((longlong)plVar29 + (-8 - (longlong)plVar26)))
            goto LAB_14eb0f909;
          }
          ::operator_delete(plVar26,uVar27);
        }
        pTVar15 = local_288;
        uVar21 = local_2b8;
        if (uVar38 <= (ulonglong)(longlong)(int)local_2b8) break;
        pFVar30 = (FScriptContainerElement *)::FString::FString(&local_138,*local_290);
        uVar33 = 0;
        if ((int)uVar21 < *local_1b0) {
          uVar33 = ~uVar21 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          uVar18 = (*pcVar7)();
          return (bool)uVar18;
        }
        lVar40 = local_278;
        pFVar41 = (local_298->AllocatorInstance).Data + local_278;
        if (pFVar41 != pFVar30) {
          if (*(void **)pFVar41 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar41);
          }
          *(undefined8 *)pFVar41 = *(undefined8 *)pFVar30;
          *(undefined8 *)pFVar30 = 0;
          *(int *)(pFVar41 + 8) = *(int *)(pFVar30 + 8);
          *(int *)(pFVar41 + 0xc) = *(int *)(pFVar30 + 0xc);
          *(undefined8 *)(pFVar30 + 8) = 0;
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        local_290 = local_290 + 1;
        local_2b8 = uVar21 + 1;
        local_278 = lVar40 + 0x10;
      }
      iVar20 = local_288->ArrayNum;
      if (iVar20 == local_288->ArrayMax) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_288->AllocatorInstance,&local_288->ArrayMax);
      }
      pTVar15->ArrayNum = iVar20 + 1;
      plVar28 = (long64 *)0x0;
      local_198 = 0;
      *(ONNXTensorElementDataType *)((pTVar15->AllocatorInstance).Data + (longlong)iVar20 * 4) =
           local_2a4;
      local_f8.SecondaryData = (ForElementType<int>)0x0;
      local_d0 = 0;
      local_cc = 8;
      pOVar22 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar16,&local_1a8);
      Ort::ThrowOnError(pOVar22);
      uVar38 = local_1a8;
      plVar29 = plVar28;
      plVar26 = plVar28;
      if (local_1a8 != 0) {
        if (0x1fffffffffffffff < local_1a8) goto LAB_14eb0f97b;
        uVar27 = local_1a8 * 8;
        plVar28 = std::_Allocate<16,std::_Default_allocate_traits>(uVar27);
        plVar26 = plVar28 + uVar38;
        local_1a0 = 0;
        iVar20 = memcmp(&local_198,&local_1a0,8);
        if (iVar20 == 0) {
          memset(plVar28,0,uVar27);
          plVar29 = plVar26;
        }
        else {
          plVar29 = plVar28;
          if (uVar38 != 0) {
            memset(plVar28,0,uVar38 << 3);
            plVar29 = plVar26;
          }
        }
      }
      uVar38 = (longlong)plVar29 - (longlong)plVar28 >> 3;
      pOVar22 = (*Ort::Global<void>::api_->GetDimensions)(pOVar16,plVar28,uVar38);
      Ort::ThrowOnError(pOVar22);
      iVar20 = (int)uVar38;
      if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar38 & 0xffffffff);
      }
      if (local_cc < iVar20) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar20,&local_f8,local_d0,&local_cc);
      }
      if (plVar28 != (long64 *)0x0) {
        uVar27 = (longlong)plVar26 - (longlong)plVar28 & 0xfffffffffffffff8;
        plVar26 = plVar28;
        if (0xfff < uVar27) {
          plVar26 = (long64 *)plVar28[-1];
          uVar27 = uVar27 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar28 + (-8 - (longlong)plVar26))) goto LAB_14eb0f909;
        }
        ::operator_delete(plVar26,uVar27);
      }
      plVar26 = (long64 *)0x0;
      local_180 = 0;
      pOVar22 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar16,&local_190);
      Ort::ThrowOnError(pOVar22);
      uVar38 = local_190;
      plVar29 = plVar26;
      plVar28 = plVar26;
      if (local_190 != 0) {
        if (0x1fffffffffffffff < local_190) {
LAB_14eb0f97b:
                    /* WARNING: Subroutine does not return */
          std::vector<__int64,std::allocator<__int64>_>::_Xlength();
        }
        uVar27 = local_190 * 8;
        plVar28 = std::_Allocate<16,std::_Default_allocate_traits>(uVar27);
        plVar26 = plVar28 + uVar38;
        local_188 = 0;
        iVar20 = memcmp(&local_180,&local_188,8);
        if (iVar20 == 0) {
          memset(plVar28,0,uVar27);
          plVar29 = plVar26;
        }
        else {
          plVar29 = plVar28;
          if (uVar38 != 0) {
            memset(plVar28,0,uVar38 << 3);
            plVar29 = plVar26;
          }
        }
      }
      pOVar22 = (*Ort::Global<void>::api_->GetDimensions)
                          (pOVar16,plVar28,(longlong)plVar29 - (longlong)plVar28 >> 3);
      Ort::ThrowOnError(pOVar22);
      for (plVar35 = plVar28; plVar35 != plVar29; plVar35 = plVar35 + 1) {
        local_2c0 = (undefined4)*plVar35;
        FVar31 = (ForElementType<int>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar31 = local_f8.SecondaryData;
        }
        if ((ulonglong)FVar31 <= &local_2c0) {
          FVar31 = (ForElementType<int>)&local_f8;
          if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
            FVar31 = local_f8.SecondaryData;
          }
          if ((&local_2c0 < (undefined4 *)((longlong)FVar31 + (longlong)local_cc * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar7 = (code *)swi(3);
            uVar18 = (*pcVar7)();
            return (bool)uVar18;
          }
        }
        if (local_d0 == local_cc) {
          local_d0 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_f8,&local_cc);
        }
        FVar31 = (ForElementType<int>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar31 = local_f8.SecondaryData;
        }
        lVar40 = (longlong)local_d0;
        local_d0 = local_d0 + 1;
        *(undefined4 *)((longlong)FVar31 + lVar40 * 4) = local_2c0;
      }
      if (plVar28 != (long64 *)0x0) {
        uVar27 = (longlong)plVar26 - (longlong)plVar28 & 0xfffffffffffffff8;
        plVar26 = plVar28;
        if (0xfff < uVar27) {
          plVar26 = (long64 *)plVar28[-1];
          uVar27 = uVar27 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar28 + (-8 - (longlong)plVar26))) {
LAB_14eb0f909:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(plVar26,uVar27);
      }
      iVar20 = local_d0;
      local_158 = (ForElementType<int>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
        local_158 = local_f8.SecondaryData;
      }
      if ((local_d0 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      iStack_150 = iVar20;
      local_128._12_4_ = uStack_14c;
      local_128.ArrayNum = iVar20;
      local_128.DataPtr = (int *)local_158;
      NNE::FSymbolicTensorShape::Make(&local_78,&local_128);
      pTVar34 = local_280;
      uVar33 = local_280->ArrayNum - 1;
      uVar21 = 0;
      if ((int)uVar33 < local_280->ArrayNum) {
        uVar21 = ~uVar33 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      pFVar32 = ::FString::FString(&local_118,
                                   *(char **)((pTVar34->AllocatorInstance).Data +
                                             (longlong)pTVar34->ArrayNum * 8 + -8));
      NNE::FTensorDesc::Make(&local_c8,pFVar32,&local_78,(ENNETensorDataType)uVar6);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      uVar21 = NNE::GetTensorDataTypeSizeInBytes(local_c8.DataType);
      if ((uVar21 != uVar9) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("SymbolicTensorDesc.GetElementByteSize() == TypeInfo.ElementSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x298,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      pTVar39 = local_270;
      iVar20 = local_270->ArrayNum;
      if (iVar20 == local_270->ArrayMax) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,&local_270->AllocatorInstance,&local_270->ArrayMax);
      }
      pTVar39->ArrayNum = iVar20 + 1;
      NNE::FTensorDesc::FTensorDesc
                ((FTensorDesc *)((pTVar39->AllocatorInstance).Data + (longlong)iVar20 * 0x48),
                 &local_c8);
      if (local_c8.Shape.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_c8.Shape.Data.AllocatorInstance.SecondaryData);
      }
      if (local_c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Name.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_78.Data.AllocatorInstance.SecondaryData);
      }
      if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_f8.SecondaryData);
      }
      operator_delete__(local_2b0);
      (*Ort::Global<void>::api_->ReleaseTypeInfo)(pOVar36);
      local_2bc = local_2bc + 1;
      pTVar37 = local_268;
      this = local_178;
    } while (local_2bc < local_2b4);
  }
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return true;
}

