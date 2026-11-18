// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// StaticClass @ 1491ee6f0

UClass * __cdecl UNiagaraDataInterfaceVectorCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVectorCurve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVectorCurve,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVectorCurve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorCurve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton;
}

// SampleCurve<TIntegralConstant<bool,1>_> @ 1492052d0

void __thiscall
UNiagaraDataInterfaceVectorCurve::SampleCurve<TIntegralConstant<bool,1>_>
          (UNiagaraDataInterfaceVectorCurve *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 in_XMM3 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float *local_108;
  int local_100 [2];
  float *local_f8;
  int local_f0 [2];
  float *local_e8;
  int local_e0 [2];
  float *local_d8;
  float *local_d0;
  int local_c8 [40];
  
  local_c8[0] = 0;
  local_d8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c8);
  local_100[0] = 0;
  local_d8 = local_d8 + local_c8[0] * param_1->PerInstanceFnInstanceIdx;
  local_d0 = local_d8;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  local_f0[0] = 0;
  local_108 = local_108 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_e0[0] = 0;
  local_f8 = local_f8 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  fVar6 = __real_40400000;
  fVar5 = __real_3f800000;
  iVar11 = 0;
  local_e8 = local_e8 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      fVar16 = *local_d8;
      local_d8 = local_d8 + local_c8[0];
      fVar16 = (fVar16 - *(float *)&this->_padding_) * *(float *)&this->_padding_ * fVar1;
      if (fVar1 <= fVar16) {
        fVar16 = fVar1;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      auVar15 = roundps(in_XMM3,ZEXT416((uint)fVar16),3);
      fVar14 = auVar15._0_4_;
      fVar13 = fVar14;
      if (fVar14 < fVar1) {
        fVar13 = fVar14 + fVar5;
      }
      fVar16 = fVar16 - fVar14;
      in_XMM3._4_12_ = auVar15._4_12_;
      in_XMM3._0_4_ = fVar14 * fVar6;
      uVar10 = (uint)in_XMM3._0_4_;
      uVar12 = (uint)(fVar13 * fVar6);
      uVar9 = uVar10 + 2;
      uVar8 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar10 + 1;
      fVar1 = *(float *)(this->_padding_ + (longlong)(int)uVar9 * 4);
      uVar9 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar13 = *(float *)(this->_padding_ + (longlong)(int)uVar8 * 4);
      uVar9 = 0;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar12 + 2;
      fVar14 = *(float *)(this->_padding_ + (longlong)(int)uVar10 * 4);
      uVar8 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar12 + 1;
      fVar2 = *(float *)(this->_padding_ + (longlong)(int)uVar9 * 4);
      uVar9 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar3 = *(float *)(this->_padding_ + (longlong)(int)uVar8 * 4);
      uVar9 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = iVar11 + 1;
      *local_108 = (*(float *)(this->_padding_ + (longlong)(int)uVar12 * 4) - fVar14) * fVar16 +
                   fVar14;
      *local_f8 = (fVar3 - fVar13) * fVar16 + fVar13;
      *local_e8 = (fVar2 - fVar1) * fVar16 + fVar1;
      local_e8 = local_e8 + local_e0[0];
      local_108 = local_108 + local_100[0];
      local_f8 = local_f8 + local_f0[0];
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// SampleCurve<TIntegralConstant<bool,0>_> @ 149205b50

void __thiscall
UNiagaraDataInterfaceVectorCurve::SampleCurve<TIntegralConstant<bool,0>_>
          (UNiagaraDataInterfaceVectorCurve *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_88;
  int local_78 [2];
  int local_70 [14];
  
  iVar3 = 0;
  local_70[0] = 0;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar4 = (longlong)local_70[0];
  local_78[0] = 0;
  local_res10 = local_res10 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  iVar1 = local_78[0];
  lVar5 = (longlong)local_78[0];
  local_78[0] = 0;
  local_res18 = local_res18 + iVar1 * param_1->PerInstanceFnInstanceIdx;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  iVar1 = local_78[0];
  lVar6 = (longlong)local_78[0];
  local_78[0] = 0;
  local_res20 = local_res20 + iVar1 * param_1->PerInstanceFnInstanceIdx;
  local_88 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  lVar2 = (longlong)local_78[0];
  local_88 = local_88 + local_78[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar9 = *local_res10;
      local_res10 = local_res10 + lVar4;
      fVar7 = FRichCurve::Eval(&this->ZCurve,fVar9,0.0);
      fVar8 = FRichCurve::Eval(&this->YCurve,fVar9,0.0);
      fVar9 = FRichCurve::Eval(&this->XCurve,fVar9,0.0);
      iVar3 = iVar3 + 1;
      *local_res18 = fVar9;
      local_res18 = local_res18 + lVar5;
      *local_res20 = fVar8;
      local_res20 = local_res20 + lVar6;
      *local_88 = fVar7;
      local_88 = local_88 + lVar2;
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// UNiagaraDataInterfaceVectorCurve @ 149213ff0

UNiagaraDataInterfaceVectorCurve * __thiscall
UNiagaraDataInterfaceVectorCurve::UNiagaraDataInterfaceVectorCurve
          (UNiagaraDataInterfaceVectorCurve *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorCurve__6B_;
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
  (this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = 0;
  *(undefined4 *)&(this->ZCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ZCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ZCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ZCurve)._padding_ + 4) = 0;
  (this->ZCurve)._padding_ = 0;
  *(undefined4 *)&(this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->ZCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->ZCurve)._padding_ + 4) = 0x404;
  (this->ZCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZCurve).Keys.ArrayNum = 0;
  (this->ZCurve).Keys.ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceVectorCurve @ 149214190

UNiagaraDataInterfaceVectorCurve * __thiscall
UNiagaraDataInterfaceVectorCurve::UNiagaraDataInterfaceVectorCurve
          (UNiagaraDataInterfaceVectorCurve *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorCurve__6B_;
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
  (this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = 0;
  *(undefined4 *)&(this->ZCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ZCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->ZCurve)._padding_ + 4) = 0;
  *(undefined4 *)&(this->ZCurve)._padding_ = 0xffffffff;
  (this->ZCurve)._padding_ = 0;
  *(undefined4 *)&(this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = 0;
  (this->ZCurve)._padding_ = 0;
  (this->ZCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZCurve).Keys.ArrayNum = 0;
  (this->ZCurve).Keys.ArrayMax = 0;
  *(undefined4 *)&(this->ZCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->ZCurve)._padding_ + 4) = 0x404;
  (this->ZCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  ::FName::FName(local_res8,L"Vector3 Curve");
  this->_padding_ = (longlong)local_res8[0];
  UNiagaraDataInterfaceCurveBase::SetDefaultLUT((UNiagaraDataInterfaceCurveBase *)this);
  return this;
}

// ~UNiagaraDataInterfaceVectorCurve @ 1492162e0

void __thiscall
UNiagaraDataInterfaceVectorCurve::~UNiagaraDataInterfaceVectorCurve
          (UNiagaraDataInterfaceVectorCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorCurve__6B_;
  pFVar1 = (this->ZCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ZCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->ZCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ZCurve)._padding_ = 0;
  pvVar2 = (void *)(this->ZCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ZCurve)._padding_);
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

// BuildLUT @ 14921f800

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraDataInterfaceVectorCurve::BuildLUT
          (UNiagaraDataInterfaceVectorCurve *this,
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
  float fVar11;
  float fVar12;
  float local_88;
  float local_84;
  float local_80 [22];
  
  iVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 < 2) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = __real_3f800000 / ((float)param_1 - __real_3f800000);
  }
  uVar4 = param_1 * 3;
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
      fVar11 = ((float)iVar8 * fVar12) / *(float *)&this->_padding_ + *(float *)&this->_padding_;
      fVar9 = FRichCurve::Eval(&this->ZCurve,fVar11,0.0);
      fVar10 = FRichCurve::Eval(&this->YCurve,fVar11,0.0);
      local_88 = FRichCurve::Eval(&this->XCurve,fVar11,0.0);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_84 = fVar10;
      local_80[0] = fVar9;
      if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)*piVar1 * 4)) &&
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
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_88;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_84) &&
          ((FScriptContainerElement *)&local_84 < pFVar2 + (longlong)*piVar1 * 4)) &&
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
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_84;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_80) &&
          ((FScriptContainerElement *)local_80 < pFVar2 + (longlong)*piVar1 * 4)) &&
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
           local_80[0];
    } while (iVar8 < param_1);
  }
  return __return_storage_ptr__;
}

// CopyToInternal @ 149223560

bool __thiscall
UNiagaraDataInterfaceVectorCurve::CopyToInternal
          (UNiagaraDataInterfaceVectorCurve *this,UNiagaraDataInterface *param_1)

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
      FRichCurve::operator=((FRichCurve *)&param_1[6]._padding_,&this->ZCurve);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceVectorCurve>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceVectorCurve>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// Equals @ 14922dd70

bool __thiscall
UNiagaraDataInterfaceVectorCurve::Equals
          (UNiagaraDataInterfaceVectorCurve *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVectorCurve_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVectorCurve_const_>(&local_28);
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
        bVar2 = FRichCurve::operator==((FRichCurve *)&param_1[6]._padding_,&this->ZCurve);
        if (bVar2) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetCurveData @ 1492356b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceVectorCurve::GetCurveData
          (UNiagaraDataInterfaceVectorCurve *this,
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
  FName local_res18;
  FRichCurve *local_78;
  FName FStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FRichCurve *local_58;
  FName FStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  FRichCurve *local_38;
  FName FStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar6 = ::FName::FName(&local_res8,L"X");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_70 = *pFVar6;
  local_78 = &this->XCurve;
  local_68 = ___xmm_3f8000003d4ccccd3d4ccccd3f800000;
  uStack_60 = _UNK_150e74ab8;
  if ((pFVar1 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
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
  *(FRichCurve **)pFVar1 = local_78;
  *(FName *)(pFVar1 + 8) = FStack_70;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_68;
  *(undefined8 *)(pFVar2 + 8) = uStack_60;
  pFVar6 = ::FName::FName(&local_res10,L"Y");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_50 = *pFVar6;
  local_58 = &this->YCurve;
  local_48 = ___xmm_3f8000003d4ccccd3f8000003d4ccccd;
  uStack_40 = _UNK_151d91788;
  if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
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
  *(FRichCurve **)pFVar1 = local_58;
  *(FName *)(pFVar1 + 8) = FStack_50;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_48;
  *(undefined8 *)(pFVar2 + 8) = uStack_40;
  pFVar6 = ::FName::FName(&local_res18,L"Z");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_30 = *pFVar6;
  local_38 = &this->ZCurve;
  local_28 = ___xmm_3f8000003f8000003e4ccccd3dcccccd;
  uStack_20 = _UNK_151d91798;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
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
  *(FRichCurve **)pFVar1 = local_38;
  *(FName *)(pFVar1 + 8) = FStack_30;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_28;
  *(undefined8 *)(pFVar2 + 8) = uStack_20;
  return;
}

// GetCurveNumElems @ 149235990

int __thiscall
UNiagaraDataInterfaceVectorCurve::GetCurveNumElems(UNiagaraDataInterfaceVectorCurve *this)

{
  return 3;
}

// GetPrivateStaticClass @ 149237300

UClass * __cdecl UNiagaraDataInterfaceVectorCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVectorCurve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVectorCurve,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVectorCurve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorCurve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton;
}

// GetVMExternalFunction @ 14923aea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceVectorCurve::GetVMExternalFunction
          (UNiagaraDataInterfaceVectorCurve *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FString local_28;
  FString local_18;
  
  if (((param_1->Name == SampleCurveName) && ((param_1->InputParamLocations).ArrayNum == 1)) &&
     (param_1->NumOutputs == 3)) {
    TCurveUseLUTBinder<TUNiagaraDataInterfaceVectorCurve_SampleCurveBinder>::Bind<>
              ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    return;
  }
  if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,&local_18);
    if (this == (UNiagaraDataInterfaceVectorCurve *)0x0) {
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

// PostInitProperties @ 149246ce0

void __thiscall
UNiagaraDataInterfaceVectorCurve::PostInitProperties(UNiagaraDataInterfaceVectorCurve *this)

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

// Serialize @ 14924d170

void __thiscall
UNiagaraDataInterfaceVectorCurve::Serialize
          (UNiagaraDataInterfaceVectorCurve *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (*(uint *)&this->_padding_ = (uint)this->_padding_ | 1, (this->_padding_ & 4) != 0)) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// Serialize @ 14924d180

void __thiscall
UNiagaraDataInterfaceVectorCurve::Serialize
          (UNiagaraDataInterfaceVectorCurve *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UNiagaraDataInterfaceCurveBase::Serialize((UNiagaraDataInterfaceCurveBase *)this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVectorCurve @ 14924f560

void __cdecl
UNiagaraDataInterfaceVectorCurve::StaticRegisterNativesUNiagaraDataInterfaceVectorCurve(void)

{
  return;
}

// UpdateTimeRanges @ 149253a90

void __thiscall
UNiagaraDataInterfaceVectorCurve::UpdateTimeRanges(UNiagaraDataInterfaceVectorCurve *this)

{
  int iVar1;
  float fVar2;
  FRichCurveKey *pFVar3;
  float fVar4;
  float fVar5;
  FRichCurveKey local_38;
  
  fVar5 = __real_3f800000;
  iVar1 = (this->XCurve).Keys.ArrayNum;
  if (((iVar1 < 1) && ((this->YCurve).Keys.ArrayNum < 1)) && ((this->ZCurve).Keys.ArrayNum < 1)) {
    *(undefined4 *)&this->_padding_ = 0;
    *(float *)((longlong)&this->_padding_ + 4) = fVar5;
    *(float *)&this->_padding_ = fVar5;
    return;
  }
  *(undefined4 *)&this->_padding_ = 0x7f7fffff;
  fVar5 = __real_7f7fffff;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetFirstKey(&this->XCurve,&local_38);
    fVar5 = pFVar3->Time;
  }
  iVar1 = (this->YCurve).Keys.ArrayNum;
  if (__real_7f7fffff <= fVar5) {
    fVar5 = __real_7f7fffff;
  }
  *(float *)&this->_padding_ = fVar5;
  fVar4 = fVar5;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetFirstKey(&this->YCurve,&local_38);
    fVar4 = pFVar3->Time;
  }
  iVar1 = (this->ZCurve).Keys.ArrayNum;
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  *(float *)&this->_padding_ = fVar5;
  fVar4 = fVar5;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetFirstKey(&this->ZCurve,&local_38);
    fVar4 = pFVar3->Time;
  }
  iVar1 = (this->XCurve).Keys.ArrayNum;
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xff7fffff;
  *(float *)&this->_padding_ = fVar5;
  fVar5 = __real_ff7fffff;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetLastKey(&this->XCurve,&local_38);
    fVar5 = pFVar3->Time;
  }
  iVar1 = (this->YCurve).Keys.ArrayNum;
  if (fVar5 <= __real_ff7fffff) {
    fVar5 = __real_ff7fffff;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  fVar4 = fVar5;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetLastKey(&this->YCurve,&local_38);
    fVar4 = pFVar3->Time;
  }
  iVar1 = (this->ZCurve).Keys.ArrayNum;
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  fVar4 = fVar5;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetLastKey(&this->ZCurve,&local_38);
    fVar4 = pFVar3->Time;
  }
  fVar2 = __real_3f800000;
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)&this->_padding_;
  *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  *(float *)&this->_padding_ = fVar2 / (fVar5 - fVar4);
  return;
}

// __VTableCtorCaller @ 149256050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UNiagaraDataInterfaceVectorCurve::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceCurveBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceCurveBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceCurveBase *)0x0) {
    UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorCurve__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].ShaderLUT.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ShaderLUT.AllocatorInstance.Data + 4) = 0;
    this[1].LUTMinTime = 0.0;
    this[1].LUTMaxTime = 0.0;
    this[1].LUTInvTimeRange = 0.0;
    *(undefined8 *)&this[1].LUTOffset = 0;
    this[1].ExposedName.ComparisonIndex = 0;
    this[1].ExposedName.Number = 0;
    this[1]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)&this[1].ExposedTexture.field0_0x0 = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[1].ExposedTexture.field0_0x0 + 4) = 0x404;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ShaderLUT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ShaderLUT.ArrayNum = 0;
    this[2].ShaderLUT.ArrayMax = 0x80;
    this[2].LUTMinTime = -NAN;
    this[2].LUTMaxTime = 0.0;
    *(undefined8 *)&this[2].LUTOffset = 0;
    this[2].ExposedName.ComparisonIndex.Value = 0;
    this[2].ExposedTexture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
    this[3]._padding_ = 0;
    this[2]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)&this[3]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[3]._padding_ + 4) = 0x404;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].LUTMinTime = 0.0;
    this[3].LUTMaxTime = 0.0;
    this[3].LUTInvTimeRange = 0.0;
    this[3].LUTNumSamplesMinusOne = 1.79366e-43;
    this[3].LUTOffset = 0xffffffff;
    *(undefined4 *)&this[3].field_0x5c = 0;
    this[3].ExposedTexture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[3]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)&this[4]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[4]._padding_ + 4) = 0x404;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

