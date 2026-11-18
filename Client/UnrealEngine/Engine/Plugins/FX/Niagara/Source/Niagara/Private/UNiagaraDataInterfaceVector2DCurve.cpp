// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// StaticClass @ 1491ee2a0

UClass * __cdecl UNiagaraDataInterfaceVector2DCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVector2DCurve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVector2DCurve,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVector2DCurve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector2DCurve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton;
}

// SampleCurve<TIntegralConstant<bool,1>_> @ 149204980

void __thiscall
UNiagaraDataInterfaceVector2DCurve::SampleCurve<TIntegralConstant<bool,1>_>
          (UNiagaraDataInterfaceVector2DCurve *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float *local_b8;
  int local_b0 [2];
  float *local_a8;
  int local_a0 [2];
  float *local_98;
  float *local_90;
  int local_88 [28];
  
  local_88[0] = 0;
  local_98 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  local_b0[0] = 0;
  local_98 = local_98 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_90 = local_98;
  local_b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_a0[0] = 0;
  local_b8 = local_b8 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  fVar4 = __real_3f800000;
  iVar10 = 0;
  local_a8 = local_a8 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      fVar14 = *local_98;
      local_98 = local_98 + local_88[0];
      fVar14 = (fVar14 - *(float *)&this->_padding_) * *(float *)&this->_padding_ * fVar1;
      if (fVar1 <= fVar14) {
        fVar14 = fVar1;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      auVar13 = roundps(in_XMM3,ZEXT416((uint)fVar14),3);
      fVar12 = auVar13._0_4_;
      fVar11 = fVar12;
      if (fVar12 < fVar1) {
        fVar11 = fVar12 + fVar4;
      }
      in_XMM3._4_12_ = auVar13._4_12_;
      in_XMM3._0_4_ = fVar12 + fVar12;
      uVar9 = (uint)in_XMM3._0_4_;
      uVar8 = (uint)(fVar11 + fVar11);
      uVar7 = uVar9 + 1;
      uVar6 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(this->_padding_ + (longlong)(int)uVar7 * 4);
      uVar7 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = uVar8 + 1;
      fVar11 = *(float *)(this->_padding_ + (longlong)(int)uVar9 * 4);
      uVar6 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)(this->_padding_ + (longlong)(int)uVar7 * 4);
      uVar7 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = iVar10 + 1;
      *local_b8 = (*(float *)(this->_padding_ + (longlong)(int)uVar8 * 4) - fVar11) *
                  (fVar14 - fVar12) + fVar11;
      *local_a8 = (fVar2 - fVar1) * (fVar14 - fVar12) + fVar1;
      local_a8 = local_a8 + local_a0[0];
      local_b8 = local_b8 + local_b0[0];
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// SampleCurve<TIntegralConstant<bool,0>_> @ 1492057a0

void __thiscall
UNiagaraDataInterfaceVector2DCurve::SampleCurve<TIntegralConstant<bool,0>_>
          (UNiagaraDataInterfaceVector2DCurve *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  int local_70 [2];
  int local_68 [12];
  
  iVar7 = 0;
  local_68[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  lVar8 = (longlong)local_68[0];
  local_70[0] = 0;
  iVar9 = local_68[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar2 = local_70[0];
  lVar10 = (longlong)local_70[0];
  local_70[0] = 0;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar6 = (longlong)local_70[0];
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + iVar2 * iVar1;
    pfVar5 = pfVar5 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar3 = pfVar3 + iVar9;
    do {
      fVar12 = *pfVar3;
      fVar11 = FRichCurve::Eval(&this->YCurve,fVar12,0.0);
      fVar12 = FRichCurve::Eval(&this->XCurve,fVar12,0.0);
      iVar7 = iVar7 + 1;
      *pfVar4 = fVar12;
      *pfVar5 = fVar11;
      pfVar4 = pfVar4 + lVar10;
      pfVar5 = pfVar5 + lVar6;
      pfVar3 = pfVar3 + lVar8;
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// UNiagaraDataInterfaceVector2DCurve @ 149213950

UNiagaraDataInterfaceVector2DCurve * __thiscall
UNiagaraDataInterfaceVector2DCurve::UNiagaraDataInterfaceVector2DCurve
          (UNiagaraDataInterfaceVector2DCurve *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector2DCurve__6B_;
  (this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = 0;
  *(undefined4 *)&(this->XCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->XCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->XCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->XCurve)._padding_ + 4) = 0;
  (this->XCurve)._padding_ = 0;
  *(undefined4 *)&(this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->XCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->XCurve)._padding_ + 4) = 0x404;
  (this->XCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->XCurve).Keys.ArrayNum = 0;
  (this->XCurve).Keys.ArrayMax = 0;
  (this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = 0;
  *(undefined4 *)&(this->YCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->YCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->YCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->YCurve)._padding_ + 4) = 0;
  (this->YCurve)._padding_ = 0;
  *(undefined4 *)&(this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->YCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->YCurve)._padding_ + 4) = 0x404;
  (this->YCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->YCurve).Keys.ArrayNum = 0;
  (this->YCurve).Keys.ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceVector2DCurve @ 149213a70

UNiagaraDataInterfaceVector2DCurve * __thiscall
UNiagaraDataInterfaceVector2DCurve::UNiagaraDataInterfaceVector2DCurve
          (UNiagaraDataInterfaceVector2DCurve *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector2DCurve__6B_;
  (this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = 0;
  *(undefined4 *)&(this->XCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->XCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->XCurve)._padding_ + 4) = 0;
  *(undefined4 *)&(this->XCurve)._padding_ = 0xffffffff;
  (this->XCurve)._padding_ = 0;
  *(undefined4 *)&(this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = 0;
  (this->XCurve)._padding_ = 0;
  (this->XCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->XCurve).Keys.ArrayNum = 0;
  (this->XCurve).Keys.ArrayMax = 0;
  *(undefined4 *)&(this->XCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->XCurve)._padding_ + 4) = 0x404;
  (this->XCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = 0;
  *(undefined4 *)&(this->YCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->YCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->YCurve)._padding_ + 4) = 0;
  *(undefined4 *)&(this->YCurve)._padding_ = 0xffffffff;
  (this->YCurve)._padding_ = 0;
  *(undefined4 *)&(this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = 0;
  (this->YCurve)._padding_ = 0;
  (this->YCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->YCurve).Keys.ArrayNum = 0;
  (this->YCurve).Keys.ArrayMax = 0;
  *(undefined4 *)&(this->YCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->YCurve)._padding_ + 4) = 0x404;
  (this->YCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  ::FName::FName(local_res8,L"Vector2 Curve");
  this->_padding_ = (longlong)local_res8[0];
  UNiagaraDataInterfaceCurveBase::SetDefaultLUT((UNiagaraDataInterfaceCurveBase *)this);
  return this;
}

// ~UNiagaraDataInterfaceVector2DCurve @ 149216080

void __thiscall
UNiagaraDataInterfaceVector2DCurve::~UNiagaraDataInterfaceVector2DCurve
          (UNiagaraDataInterfaceVector2DCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector2DCurve__6B_;
  pFVar1 = (this->YCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->YCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->YCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->YCurve)._padding_ = 0;
  pvVar2 = (void *)(this->YCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->YCurve)._padding_);
  pFVar1 = (this->XCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->XCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->XCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->XCurve)._padding_ = 0;
  pvVar2 = (void *)(this->XCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->XCurve)._padding_);
  UNiagaraDataInterfaceCurveBase::~UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this);
  return;
}

// BuildLUT @ 14921f150

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraDataInterfaceVector2DCurve::BuildLUT
          (UNiagaraDataInterfaceVector2DCurve *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_58;
  float local_54 [15];
  
  iVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 < 2) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = __real_3f800000 / ((float)param_1 - __real_3f800000);
  }
  uVar4 = param_1 * 2;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  if (0 < param_1) {
    do {
      fVar9 = ((float)iVar8 * fVar10) / *(float *)&this->_padding_ + *(float *)&this->_padding_;
      local_58 = FRichCurve::Eval(&this->XCurve,fVar9,0.0);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_58;
      local_54[0] = FRichCurve::Eval(&this->YCurve,fVar9,0.0);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_54) &&
          ((FScriptContainerElement *)local_54 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      iVar8 = iVar8 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           local_54[0];
    } while (iVar8 < param_1);
  }
  return __return_storage_ptr__;
}

// CopyToInternal @ 149223340

bool __thiscall
UNiagaraDataInterfaceVector2DCurve::CopyToInternal
          (UNiagaraDataInterfaceVector2DCurve *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceCurveBase::CopyToInternal
                    ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      FRichCurve::operator=((FRichCurve *)(param_1 + 2),&this->XCurve);
      FRichCurve::operator=((FRichCurve *)&param_1[4]._padding_,&this->YCurve);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceVector2DCurve>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceVector2DCurve>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// Equals @ 14922db30

bool __thiscall
UNiagaraDataInterfaceVector2DCurve::Equals
          (UNiagaraDataInterfaceVector2DCurve *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceCurveBase::Equals((UNiagaraDataInterfaceCurveBase *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVector2DCurve_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVector2DCurve_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    bVar2 = FRichCurve::operator==((FRichCurve *)(param_1 + 2),&this->XCurve);
    if (bVar2) {
      bVar2 = FRichCurve::operator==((FRichCurve *)&param_1[4]._padding_,&this->YCurve);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// GetCurveData @ 149235130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceVector2DCurve::GetCurveData
          (UNiagaraDataInterfaceVector2DCurve *this,
          TArray<UNiagaraDataInterfaceCurveBase::FCurveData,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FName local_res8;
  FName local_res10;
  FRichCurve *local_48;
  FName FStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  FRichCurve *local_28;
  FName FStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar6 = ::FName::FName(&local_res8,L"X");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_40 = *pFVar6;
  local_48 = &this->XCurve;
  local_38 = ___xmm_3f8000003d4ccccd3d4ccccd3f800000;
  uStack_30 = _UNK_150e74ab8;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x20;
  *(FRichCurve **)pFVar1 = local_48;
  *(FName *)(pFVar1 + 8) = FStack_40;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_38;
  *(undefined8 *)(pFVar2 + 8) = uStack_30;
  pFVar6 = ::FName::FName(&local_res10,L"Y");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_20 = *pFVar6;
  local_28 = &this->YCurve;
  local_18 = ___xmm_3f8000003d4ccccd3f8000003d4ccccd;
  uStack_10 = _UNK_151d91788;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x20;
  *(FRichCurve **)pFVar1 = local_28;
  *(FName *)(pFVar1 + 8) = FStack_20;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_18;
  *(undefined8 *)(pFVar2 + 8) = uStack_10;
  return;
}

// GetCurveNumElems @ 149235970

int __thiscall
UNiagaraDataInterfaceVector2DCurve::GetCurveNumElems(UNiagaraDataInterfaceVector2DCurve *this)

{
  return 2;
}

// GetPrivateStaticClass @ 149237180

UClass * __cdecl UNiagaraDataInterfaceVector2DCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVector2DCurve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVector2DCurve,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVector2DCurve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector2DCurve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton;
}

// GetVMExternalFunction @ 14923ac80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceVector2DCurve::GetVMExternalFunction
          (UNiagaraDataInterfaceVector2DCurve *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FString local_28;
  FString local_18;
  
  if (((param_1->Name == SampleCurveName) && ((param_1->InputParamLocations).ArrayNum == 1)) &&
     (param_1->NumOutputs == 2)) {
    TCurveUseLUTBinder<TUNiagaraDataInterfaceVector2DCurve_SampleCurveBinder>::Bind<>
              ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    return;
  }
  if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,&local_18);
    if (this == (UNiagaraDataInterfaceVector2DCurve *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostInitProperties @ 149246be0

void __thiscall
UNiagaraDataInterfaceVector2DCurve::PostInitProperties(UNiagaraDataInterfaceVector2DCurve *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// Serialize @ 14924d0f0

void __thiscall
UNiagaraDataInterfaceVector2DCurve::Serialize
          (UNiagaraDataInterfaceVector2DCurve *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (*(uint *)&this->_padding_ = (uint)this->_padding_ | 1, (this->_padding_ & 4) != 0)) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// Serialize @ 14924d100

void __thiscall
UNiagaraDataInterfaceVector2DCurve::Serialize
          (UNiagaraDataInterfaceVector2DCurve *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UNiagaraDataInterfaceCurveBase::Serialize((UNiagaraDataInterfaceCurveBase *)this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVector2DCurve @ 14924f540

void __cdecl
UNiagaraDataInterfaceVector2DCurve::StaticRegisterNativesUNiagaraDataInterfaceVector2DCurve(void)

{
  return;
}

// UpdateTimeRanges @ 149253720

void __thiscall
UNiagaraDataInterfaceVector2DCurve::UpdateTimeRanges(UNiagaraDataInterfaceVector2DCurve *this)

{
  int iVar1;
  float fVar2;
  FRichCurveKey *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FRichCurveKey local_48 [2];
  
  fVar4 = __real_7f7fffff;
  fVar6 = __real_3f800000;
  iVar1 = (this->XCurve).Keys.ArrayNum;
  if ((iVar1 < 1) && ((this->YCurve).Keys.ArrayNum < 1)) {
    *(undefined4 *)&this->_padding_ = 0;
    *(float *)((longlong)&this->_padding_ + 4) = fVar6;
    *(float *)&this->_padding_ = fVar6;
    return;
  }
  *(undefined4 *)&this->_padding_ = 0x7f7fffff;
  fVar6 = fVar4;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetFirstKey(&this->XCurve,local_48);
    fVar6 = pFVar3->Time;
  }
  iVar1 = (this->YCurve).Keys.ArrayNum;
  if (fVar4 <= fVar6) {
    fVar6 = fVar4;
  }
  *(float *)&this->_padding_ = fVar6;
  fVar4 = fVar6;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetFirstKey(&this->YCurve,local_48);
    fVar4 = pFVar3->Time;
  }
  iVar1 = (this->XCurve).Keys.ArrayNum;
  if (fVar4 <= fVar6) {
    fVar6 = fVar4;
  }
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xff7fffff;
  *(float *)&this->_padding_ = fVar6;
  fVar4 = __real_ff7fffff;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetLastKey(&this->XCurve,local_48);
    fVar6 = *(float *)&this->_padding_;
    fVar4 = pFVar3->Time;
  }
  iVar1 = (this->YCurve).Keys.ArrayNum;
  if (fVar4 <= __real_ff7fffff) {
    fVar4 = __real_ff7fffff;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar4;
  fVar5 = fVar4;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetLastKey(&this->YCurve,local_48);
    fVar6 = *(float *)&this->_padding_;
    fVar5 = pFVar3->Time;
  }
  fVar2 = __real_3f800000;
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar4;
  *(float *)&this->_padding_ = fVar2 / (fVar4 - fVar6);
  return;
}

