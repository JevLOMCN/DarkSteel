// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// StaticClass @ 1491ee460

UClass * __cdecl UNiagaraDataInterfaceVector4Curve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVector4Curve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVector4Curve,0x270,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVector4Curve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector4Curve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton;
}

// SampleCurve<TIntegralConstant<bool,1>_> @ 149204cf0

void __thiscall
UNiagaraDataInterfaceVector4Curve::SampleCurve<TIntegralConstant<bool,1>_>
          (UNiagaraDataInterfaceVector4Curve *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 in_XMM3 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float *local_128;
  int local_120 [2];
  float *local_118;
  int local_110 [2];
  float *local_108;
  int local_100 [2];
  float *local_f8;
  int local_f0 [2];
  float *local_e8;
  float *local_e0;
  int local_d8 [44];
  
  local_d8[0] = 0;
  local_e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d8);
  local_120[0] = 0;
  local_e8 = local_e8 + local_d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_e0 = local_e8;
  local_128 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  local_110[0] = 0;
  local_128 = local_128 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  local_118 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_100[0] = 0;
  local_118 = local_118 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  local_f0[0] = 0;
  local_108 = local_108 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  fVar8 = __real_40800000;
  fVar7 = __real_3f800000;
  iVar13 = 0;
  local_f8 = local_f8 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      fVar18 = *local_e8;
      local_e8 = local_e8 + local_d8[0];
      fVar18 = (fVar18 - *(float *)&this->_padding_) * *(float *)&this->_padding_ * fVar1;
      if (fVar1 <= fVar18) {
        fVar18 = fVar1;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      auVar17 = roundps(in_XMM3,ZEXT416((uint)fVar18),3);
      fVar16 = auVar17._0_4_;
      fVar15 = fVar16;
      if (fVar16 < fVar1) {
        fVar15 = fVar16 + fVar7;
      }
      fVar18 = fVar18 - fVar16;
      in_XMM3._4_12_ = auVar17._4_12_;
      in_XMM3._0_4_ = fVar16 * fVar8;
      uVar12 = (uint)in_XMM3._0_4_;
      uVar14 = (uint)(fVar15 * fVar8);
      uVar11 = uVar12 + 3;
      uVar10 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = uVar12 + 2;
      fVar1 = *(float *)(this->_padding_ + (longlong)(int)uVar11 * 4);
      uVar11 = 0;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = uVar12 + 1;
      fVar15 = *(float *)(this->_padding_ + (longlong)(int)uVar10 * 4);
      uVar10 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar16 = *(float *)(this->_padding_ + (longlong)(int)uVar11 * 4);
      uVar11 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = uVar14 + 3;
      fVar2 = *(float *)(this->_padding_ + (longlong)(int)uVar12 * 4);
      uVar10 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = uVar14 + 2;
      fVar3 = *(float *)(this->_padding_ + (longlong)(int)uVar11 * 4);
      uVar11 = 0;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = uVar14 + 1;
      fVar4 = *(float *)(this->_padding_ + (longlong)(int)uVar10 * 4);
      uVar10 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar5 = *(float *)(this->_padding_ + (longlong)(int)uVar11 * 4);
      uVar11 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = iVar13 + 1;
      *local_128 = (*(float *)(this->_padding_ + (longlong)(int)uVar14 * 4) - fVar2) * fVar18 +
                   fVar2;
      *local_118 = (fVar5 - fVar16) * fVar18 + fVar16;
      *local_108 = (fVar4 - fVar15) * fVar18 + fVar15;
      local_108 = local_108 + local_100[0];
      *local_f8 = (fVar3 - fVar1) * fVar18 + fVar1;
      local_f8 = local_f8 + local_f0[0];
      local_128 = local_128 + local_120[0];
      local_118 = local_118 + local_110[0];
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// SampleCurve<TIntegralConstant<bool,0>_> @ 1492058f0

void __thiscall
UNiagaraDataInterfaceVector4Curve::SampleCurve<TIntegralConstant<bool,0>_>
          (UNiagaraDataInterfaceVector4Curve *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_b8;
  float *local_b0;
  int local_90 [2];
  int local_88 [20];
  
  iVar3 = 0;
  local_88[0] = 0;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  lVar5 = (longlong)local_88[0];
  local_90[0] = 0;
  local_res10 = local_res10 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar1 = local_90[0];
  lVar4 = (longlong)local_90[0];
  local_90[0] = 0;
  local_res18 = local_res18 + iVar1 * param_1->PerInstanceFnInstanceIdx;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar1 = local_90[0];
  lVar6 = (longlong)local_90[0];
  local_90[0] = 0;
  local_res20 = local_res20 + iVar1 * param_1->PerInstanceFnInstanceIdx;
  local_b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar1 = local_90[0];
  lVar7 = (longlong)local_90[0];
  local_90[0] = 0;
  local_b8 = local_b8 + iVar1 * param_1->PerInstanceFnInstanceIdx;
  local_b0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  lVar2 = (longlong)local_90[0];
  local_b0 = local_b0 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar11 = *local_res10;
      local_res10 = local_res10 + lVar5;
      fVar8 = FRichCurve::Eval(&this->WCurve,fVar11,0.0);
      fVar9 = FRichCurve::Eval(&this->ZCurve,fVar11,0.0);
      fVar10 = FRichCurve::Eval(&this->YCurve,fVar11,0.0);
      fVar11 = FRichCurve::Eval(&this->XCurve,fVar11,0.0);
      iVar3 = iVar3 + 1;
      *local_res18 = fVar11;
      local_res18 = local_res18 + lVar4;
      *local_res20 = fVar10;
      local_res20 = local_res20 + lVar6;
      *local_b8 = fVar9;
      local_b8 = local_b8 + lVar7;
      *local_b0 = fVar8;
      local_b0 = local_b0 + lVar2;
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// UNiagaraDataInterfaceVector4Curve @ 149213bb0

UNiagaraDataInterfaceVector4Curve * __thiscall
UNiagaraDataInterfaceVector4Curve::UNiagaraDataInterfaceVector4Curve
          (UNiagaraDataInterfaceVector4Curve *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector4Curve__6B_;
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
  (this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = 0;
  *(undefined4 *)&(this->WCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->WCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->WCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->WCurve)._padding_ + 4) = 0;
  (this->WCurve)._padding_ = 0;
  *(undefined4 *)&(this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->WCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->WCurve)._padding_ + 4) = 0x404;
  (this->WCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WCurve).Keys.ArrayNum = 0;
  (this->WCurve).Keys.ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceVector4Curve @ 149213dc0

UNiagaraDataInterfaceVector4Curve * __thiscall
UNiagaraDataInterfaceVector4Curve::UNiagaraDataInterfaceVector4Curve
          (UNiagaraDataInterfaceVector4Curve *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector4Curve__6B_;
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
  (this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = 0;
  *(undefined4 *)&(this->WCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->WCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->WCurve)._padding_ + 4) = 0;
  *(undefined4 *)&(this->WCurve)._padding_ = 0xffffffff;
  (this->WCurve)._padding_ = 0;
  *(undefined4 *)&(this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = 0;
  (this->WCurve)._padding_ = 0;
  (this->WCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WCurve).Keys.ArrayNum = 0;
  (this->WCurve).Keys.ArrayMax = 0;
  *(undefined4 *)&(this->WCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->WCurve)._padding_ + 4) = 0x404;
  (this->WCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  ::FName::FName(local_res8,L"Vector4 Curve");
  this->_padding_ = (longlong)local_res8[0];
  UNiagaraDataInterfaceCurveBase::SetDefaultLUT((UNiagaraDataInterfaceCurveBase *)this);
  return this;
}

// ~UNiagaraDataInterfaceVector4Curve @ 149216160

void __thiscall
UNiagaraDataInterfaceVector4Curve::~UNiagaraDataInterfaceVector4Curve
          (UNiagaraDataInterfaceVector4Curve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector4Curve__6B_;
  pFVar1 = (this->WCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->WCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->WCurve)._padding_ = 0;
  pvVar2 = (void *)(this->WCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WCurve)._padding_);
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

// BuildLUT @ 14921f3d0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraDataInterfaceVector4Curve::BuildLUT
          (UNiagaraDataInterfaceVector4Curve *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_98;
  float local_94;
  float local_90;
  float local_8c [25];
  
  iVar7 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 < 2) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = __real_3f800000 / ((float)param_1 - __real_3f800000);
  }
  uVar8 = param_1 * 4;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  if (0 < param_1) {
    do {
      fVar12 = ((float)iVar7 * fVar13) / *(float *)&this->_padding_ + *(float *)&this->_padding_;
      fVar9 = FRichCurve::Eval(&this->WCurve,fVar12,0.0);
      fVar10 = FRichCurve::Eval(&this->ZCurve,fVar12,0.0);
      fVar11 = FRichCurve::Eval(&this->YCurve,fVar12,0.0);
      local_98 = FRichCurve::Eval(&this->XCurve,fVar12,0.0);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_94 = fVar11;
      local_90 = fVar10;
      local_8c[0] = fVar9;
      if (((pFVar2 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_98;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_94) &&
          ((FScriptContainerElement *)&local_94 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_94;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_90;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_8c) &&
          ((FScriptContainerElement *)local_8c < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      iVar7 = iVar7 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
           local_8c[0];
    } while (iVar7 < param_1);
  }
  return __return_storage_ptr__;
}

// CopyToInternal @ 149223440

bool __thiscall
UNiagaraDataInterfaceVector4Curve::CopyToInternal
          (UNiagaraDataInterfaceVector4Curve *this,UNiagaraDataInterface *param_1)

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
      FRichCurve::operator=((FRichCurve *)&param_1[8].field_0x30,&this->WCurve);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceVector4Curve>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceVector4Curve>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// Equals @ 14922dc30

bool __thiscall
UNiagaraDataInterfaceVector4Curve::Equals
          (UNiagaraDataInterfaceVector4Curve *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVector4Curve_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVector4Curve_const_>(&local_28);
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
          bVar2 = FRichCurve::operator==((FRichCurve *)&param_1[8].field_0x30,&this->WCurve);
          if (bVar2) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// GetCurveData @ 149235330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceVector4Curve::GetCurveData
          (UNiagaraDataInterfaceVector4Curve *this,
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
  FName local_res20;
  FRichCurve *local_a8;
  FName FStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  FRichCurve *local_88;
  FName FStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FRichCurve *local_68;
  FName FStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FRichCurve *local_48;
  FName FStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pFVar6 = ::FName::FName(&local_res8,L"X");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_a0 = *pFVar6;
  local_a8 = &this->XCurve;
  local_98 = ___xmm_3f8000003d4ccccd3d4ccccd3f800000;
  uStack_90 = _UNK_150e74ab8;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
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
  *(FRichCurve **)pFVar1 = local_a8;
  *(FName *)(pFVar1 + 8) = FStack_a0;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_98;
  *(undefined8 *)(pFVar2 + 8) = uStack_90;
  pFVar6 = ::FName::FName(&local_res10,L"Y");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_80 = *pFVar6;
  local_88 = &this->YCurve;
  local_78 = ___xmm_3f8000003d4ccccd3f8000003d4ccccd;
  uStack_70 = _UNK_151d91788;
  if ((pFVar1 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
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
  *(FRichCurve **)pFVar1 = local_88;
  *(FName *)(pFVar1 + 8) = FStack_80;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_78;
  *(undefined8 *)(pFVar2 + 8) = uStack_70;
  pFVar6 = ::FName::FName(&local_res18,L"Z");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_60 = *pFVar6;
  local_68 = &this->ZCurve;
  local_58 = ___xmm_3f8000003f8000003e4ccccd3dcccccd;
  uStack_50 = _UNK_151d91798;
  if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
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
  *(FRichCurve **)pFVar1 = local_68;
  *(FName *)(pFVar1 + 8) = FStack_60;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_58;
  *(undefined8 *)(pFVar2 + 8) = uStack_50;
  pFVar6 = ::FName::FName(&local_res20,L"W");
  pFVar1 = (param_1->AllocatorInstance).Data;
  FStack_40 = *pFVar6;
  local_48 = &this->WCurve;
  local_38 = ___xmm_3f8000003e4ccccd3e4ccccd3e4ccccd;
  uStack_30 = _UNK_1516ceba8;
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
  return;
}

// GetCurveNumElems @ 149235980

int __thiscall
UNiagaraDataInterfaceVector4Curve::GetCurveNumElems(UNiagaraDataInterfaceVector4Curve *this)

{
  return 4;
}

// GetPrivateStaticClass @ 149237240

UClass * __cdecl UNiagaraDataInterfaceVector4Curve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVector4Curve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVector4Curve,0x270,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVector4Curve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector4Curve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton;
}

// GetVMExternalFunction @ 14923ad90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceVector4Curve::GetVMExternalFunction
          (UNiagaraDataInterfaceVector4Curve *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FString local_28;
  FString local_18;
  
  if (((param_1->Name == SampleCurveName) && ((param_1->InputParamLocations).ArrayNum == 1)) &&
     (param_1->NumOutputs == 4)) {
    TCurveUseLUTBinder<TUNiagaraDataInterfaceVector4Curve_SampleCurveBinder>::Bind<>
              ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    return;
  }
  if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,&local_18);
    if (this == (UNiagaraDataInterfaceVector4Curve *)0x0) {
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

// PostInitProperties @ 149246c60

void __thiscall
UNiagaraDataInterfaceVector4Curve::PostInitProperties(UNiagaraDataInterfaceVector4Curve *this)

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

// Serialize @ 14924d130

void __thiscall
UNiagaraDataInterfaceVector4Curve::Serialize
          (UNiagaraDataInterfaceVector4Curve *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (*(uint *)&this->_padding_ = (uint)this->_padding_ | 1, (this->_padding_ & 4) != 0)) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// Serialize @ 14924d140

void __thiscall
UNiagaraDataInterfaceVector4Curve::Serialize
          (UNiagaraDataInterfaceVector4Curve *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UNiagaraDataInterfaceCurveBase::Serialize((UNiagaraDataInterfaceCurveBase *)this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVector4Curve @ 14924f550

void __cdecl
UNiagaraDataInterfaceVector4Curve::StaticRegisterNativesUNiagaraDataInterfaceVector4Curve(void)

{
  return;
}

// UpdateTimeRanges @ 149253890

void __thiscall
UNiagaraDataInterfaceVector4Curve::UpdateTimeRanges(UNiagaraDataInterfaceVector4Curve *this)

{
  int iVar1;
  float fVar2;
  FRichCurveKey *pFVar3;
  float fVar4;
  float fVar5;
  FRichCurveKey local_38;
  
  fVar5 = __real_3f800000;
  iVar1 = (this->XCurve).Keys.ArrayNum;
  if ((((iVar1 < 1) && ((this->YCurve).Keys.ArrayNum < 1)) && ((this->ZCurve).Keys.ArrayNum < 1)) &&
     ((this->WCurve).Keys.ArrayNum < 1)) {
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
  iVar1 = (this->WCurve).Keys.ArrayNum;
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  *(float *)&this->_padding_ = fVar5;
  fVar4 = fVar5;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetFirstKey(&this->WCurve,&local_38);
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
  iVar1 = (this->WCurve).Keys.ArrayNum;
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  fVar4 = fVar5;
  if (0 < iVar1) {
    pFVar3 = FRichCurve::GetLastKey(&this->WCurve,&local_38);
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

