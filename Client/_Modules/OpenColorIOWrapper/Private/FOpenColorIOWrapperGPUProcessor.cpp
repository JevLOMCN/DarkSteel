// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 9

// FOpenColorIOWrapperGPUProcessor @ 14d75e6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "GpuLanguage": Some values do not have unique names */
/* WARNING: Enum "OptimizationFlags": Some values do not have unique names */

FOpenColorIOWrapperGPUProcessor * __thiscall
FOpenColorIOWrapperGPUProcessor::FOpenColorIOWrapperGPUProcessor
          (FOpenColorIOWrapperGPUProcessor *this,FOpenColorIOWrapperProcessor param_1,bool param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t wVar4;
  Processor *this_00;
  GPUProcessor *this_01;
  longlong *plVar5;
  TPimplPtr<FOpenColorIOGPUProcessorPimpl,1> TVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  shared_ptr<OpenColorIO_v2_4::GPUProcessor_const_> *psVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  GpuShaderCreator *local_f8;
  longlong *local_f0;
  undefined1 local_e8 [16];
  char local_d8 [128];
  void *local_58;
  char *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
                    /* WARNING: Load size is inaccurate */
  (this->ParentProcessor).Pimpl = *param_1.Pimpl;
  puVar11 = (undefined8 *)0x0;
  *(undefined8 *)param_1.Pimpl = 0;
  puVar10 = ::operator_new(0x30);
  puVar13 = puVar11;
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOGPUProcessorPimpl>;
    puVar10[1] = UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOGPUProcessorPimpl>;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar13 = puVar10;
  }
  this->GPUPimpl = (TPimplPtr<FOpenColorIOGPUProcessorPimpl,1>)(puVar13 + 2);
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1063,
               "FOpenColorIOWrapperGPUProcessor::FOpenColorIOWrapperGPUProcessor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
               ,0x427);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1063);
  }
  if (*(longlong *)(this->ParentProcessor).Pimpl != 0) {
    OpenColorIO_v2_4::GpuShaderDesc::CreateShaderDesc
              ((shared_ptr<OpenColorIO_v2_4::GpuShaderDesc> *)&local_f8);
    OpenColorIO_v2_4::GpuShaderCreator::setLanguage(local_f8,GPU_LANGUAGE_HLSL_DX11);
    local_50 = local_d8;
    local_58 = (void *)0x0;
    bVar8 = false;
    local_48 = 0xb;
    puVar13 = puVar11;
    do {
      wVar4 = L"OCIOConvert"[(longlong)puVar13];
      local_d8[(longlong)puVar13] = (char)wVar4;
      puVar13 = (undefined8 *)((longlong)puVar13 + 1);
      bVar8 = (bool)(bVar8 | 0x7f < (ushort)wVar4);
    } while ((longlong)puVar13 < 0xc);
    if (bVar8) {
      do {
        if (0x7f < (ushort)L"OCIOConvert"[(longlong)puVar11]) {
          local_d8[(longlong)puVar11] = '?';
        }
        puVar11 = (undefined8 *)((longlong)puVar11 + 1);
      } while ((longlong)puVar11 < 0xc);
    }
    OpenColorIO_v2_4::GpuShaderCreator::setFunctionName(local_f8,local_50);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    OpenColorIO_v2_4::GpuShaderCreator::setResourcePrefix(local_f8,"Ocio");
    (**(code **)(local_f8->_padding_ + 0x30))(local_f8,0);
    this_00 = *(Processor **)(this->ParentProcessor).Pimpl;
    if (param_2) {
      psVar12 = OpenColorIO_v2_4::Processor::getOptimizedLegacyGPUProcessor
                          (this_00,(shared_ptr<OpenColorIO_v2_4::GPUProcessor_const_> *)local_e8,
                           OPTIMIZATION_NO_DYNAMIC_PROPERTIES|OPTIMIZATION_DEFAULT,0x41);
    }
    else {
      psVar12 = OpenColorIO_v2_4::Processor::getOptimizedGPUProcessor
                          (this_00,(shared_ptr<OpenColorIO_v2_4::GPUProcessor_const_> *)local_e8,
                           OPTIMIZATION_NO_DYNAMIC_PROPERTIES|OPTIMIZATION_DEFAULT);
    }
    this_01 = *(GPUProcessor **)psVar12;
    plVar5 = *(longlong **)&psVar12->field_0x8;
    *(undefined8 *)psVar12 = 0;
    *(undefined8 *)&psVar12->field_0x8 = 0;
    if ((longlong *)local_e8._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar7 = (longlong *)(local_e8._8_8_ + 8);
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (*(code *)**(undefined8 **)local_e8._8_8_)(local_e8._8_8_);
        LOCK();
        piVar1 = (int *)(local_e8._8_8_ + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)local_e8._8_8_ + 8))(local_e8._8_8_);
        }
      }
    }
    OpenColorIO_v2_4::GPUProcessor::extractGpuShaderInfo
              (this_01,(shared_ptr<OpenColorIO_v2_4::GpuShaderDesc> *)&local_f8);
    TVar6 = this->GPUPimpl;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)((longlong)TVar6 + 8);
    *(GPUProcessor **)TVar6 = this_01;
    *(longlong **)((longlong)TVar6 + 8) = plVar5;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    TVar6 = this->GPUPimpl;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)((longlong)TVar6 + 0x18);
    *(GpuShaderCreator **)((longlong)TVar6 + 0x10) = local_f8;
    *(longlong **)((longlong)TVar6 + 0x18) = local_f0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_f0 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0);
        }
      }
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  lVar9 = *(longlong *)param_1.Pimpl;
  if (lVar9 != 0) {
    (**(code **)(lVar9 + -0x10))(lVar9 + -0x10);
  }
  return this;
}

// Get3DTexture @ 14d762220

bool __thiscall
FOpenColorIOWrapperGPUProcessor::Get3DTexture
          (FOpenColorIOWrapperGPUProcessor *this,uint param_1,FName *param_2,uint *param_3,
          TextureFilter *param_4,float **param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FName *pFVar6;
  char *local_res8;
  int local_res10 [2];
  undefined8 local_38;
  FName local_30;
  
  if (((*(longlong *)(this->ParentProcessor).Pimpl != 0) && (*(longlong *)this->GPUPimpl != 0)) &&
     (plVar1 = *(longlong **)((longlong)this->GPUPimpl + 0x10), plVar1 != (longlong *)0x0)) {
    uVar5 = (**(code **)(*plVar1 + 0xe0))();
    if (param_1 < uVar5) goto LAB_14d76228b;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7996336546523382887>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
                     ,0x467,"InIndex < GetNum3DTextures()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14d76228b:
  if (((*(longlong *)(this->ParentProcessor).Pimpl == 0) || (*(longlong *)this->GPUPimpl == 0)) ||
     (plVar1 = *(longlong **)((longlong)this->GPUPimpl + 0x10), plVar1 == (longlong *)0x0)) {
    return false;
  }
  local_res10[0] = 3;
  local_res8 = (char *)0x0;
  local_38 = 0;
  (**(code **)(*plVar1 + 0xe8))(plVar1,param_1,&local_res8,&local_38,param_3,local_res10);
  *param_5 = (float *)0x0;
  plVar1 = *(longlong **)((longlong)this->GPUPimpl + 0x10);
  (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,param_5);
  pFVar6 = ::FName::FName(&local_30,local_res8);
  *param_2 = *pFVar6;
  *param_4 = TF_Bilinear;
  if ((local_res10[0] - 1U & 0xfffffffd) == 0) {
    *param_4 = TF_Nearest;
  }
  if (((local_res8 != (char *)0x0) && (*param_3 != 0)) && (*param_5 != (float *)0x0)) {
    return true;
  }
  return false;
}

// GetCacheID @ 14d7624c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperGPUProcessor::GetCacheID
          (FOpenColorIOWrapperGPUProcessor *this,FString *__return_storage_ptr__)

{
  GPUProcessor *this_00;
  char *pcVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (*(longlong *)(this->ParentProcessor).Pimpl != 0) {
    this_00 = *(GPUProcessor **)this->GPUPimpl;
    if ((this_00 != (GPUProcessor *)0x0) && (*(longlong *)((longlong)this->GPUPimpl + 0x10) != 0)) {
      pcVar1 = OpenColorIO_v2_4::GPUProcessor::getCacheID(this_00);
      pTVar2 = StringCast<wchar_t,128,char>(&local_138,pcVar1);
      ::FString::FString(__return_storage_ptr__,pTVar2->Ptr);
      if ((void *)local_138._padding_ == (void *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free((void *)local_138._padding_);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNum3DTextures @ 14d763590

uint __thiscall
FOpenColorIOWrapperGPUProcessor::GetNum3DTextures(FOpenColorIOWrapperGPUProcessor *this)

{
  longlong *plVar1;
  uint uVar2;
  
  if (((*(longlong *)(this->ParentProcessor).Pimpl != 0) && (*(longlong *)this->GPUPimpl != 0)) &&
     (plVar1 = *(longlong **)((longlong)this->GPUPimpl + 0x10), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014d7635af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xe0))();
    return uVar2;
  }
  return 0;
}

// GetNumTextures @ 14d763610

uint __thiscall
FOpenColorIOWrapperGPUProcessor::GetNumTextures(FOpenColorIOWrapperGPUProcessor *this)

{
  longlong *plVar1;
  uint uVar2;
  
  if (((*(longlong *)(this->ParentProcessor).Pimpl != 0) && (*(longlong *)this->GPUPimpl != 0)) &&
     (plVar1 = *(longlong **)((longlong)this->GPUPimpl + 0x10), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014d76362f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 200))();
    return uVar2;
  }
  return 0;
}

// GetShader @ 14d7636c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FOpenColorIOWrapperGPUProcessor::GetShader
          (FOpenColorIOWrapperGPUProcessor *this,FString *param_1,FString *param_2)

{
  GpuShaderCreator *this_00;
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar4;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (((*(longlong *)(this->ParentProcessor).Pimpl == 0) || (*(longlong *)this->GPUPimpl == 0)) ||
     (this_00 = *(GpuShaderCreator **)((longlong)this->GPUPimpl + 0x10),
     this_00 == (GpuShaderCreator *)0x0)) {
    bVar1 = false;
  }
  else {
    uVar2 = OpenColorIO_v2_4::GpuShaderCreator::getNumDynamicProperties(this_00);
    if (uVar2 != 0) {
      `FOpenColorIOWrapperGPUProcessor::GetShader'::__l5::<lambda_1>::operator()(local_158);
    }
    pcVar3 = (char *)(**(code **)(**(longlong **)((longlong)this->GPUPimpl + 0x10) + 8))();
    pTVar4 = StringCast<wchar_t,128,char>(&local_148,pcVar3);
    ::FString::operator=(param_1,pTVar4->Ptr);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    pcVar3 = OpenColorIO_v2_4::GpuShaderDesc::getShaderText
                       (*(GpuShaderDesc **)((longlong)this->GPUPimpl + 0x10));
    pTVar4 = StringCast<wchar_t,128,char>(&local_148,pcVar3);
    ::FString::operator=(param_2,pTVar4->Ptr);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    bVar1 = true;
  }
  return bVar1;
}

// GetTexture @ 14d7637c0

bool __thiscall
FOpenColorIOWrapperGPUProcessor::GetTexture
          (FOpenColorIOWrapperGPUProcessor *this,uint param_1,FName *param_2,uint *param_3,
          uint *param_4,TextureFilter *param_5,bool *param_6,float **param_7)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FName *pFVar6;
  int local_res8 [2];
  char local_res10 [8];
  int local_48 [2];
  char *local_40;
  undefined8 local_38;
  FName local_30;
  
  if (((*(longlong *)(this->ParentProcessor).Pimpl != 0) && (*(longlong *)this->GPUPimpl != 0)) &&
     (plVar1 = *(longlong **)((longlong)this->GPUPimpl + 0x10), plVar1 != (longlong *)0x0)) {
    uVar5 = (**(code **)(*plVar1 + 200))();
    if (param_1 < uVar5) goto LAB_14d76382c;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7996336546523382929>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
                     ,0x491,"InIndex < GetNumTextures()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14d76382c:
  if (((*(longlong *)(this->ParentProcessor).Pimpl == 0) || (*(longlong *)this->GPUPimpl == 0)) ||
     (plVar1 = *(longlong **)((longlong)this->GPUPimpl + 0x10), plVar1 == (longlong *)0x0)) {
    return false;
  }
  local_40 = (char *)0x0;
  local_38 = 0;
  local_48[0] = 1;
  local_res10[0] = '\x02';
  local_res8[0] = 2;
  (**(code **)(*plVar1 + 0xd0))
            (plVar1,param_1,&local_40,&local_38,param_3,param_4,local_48,local_res10,local_res8);
  if (local_res10[0] != '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dimensions == OpenColorIO_v2_4::GpuShaderDesc::TextureDimensions::TEXTURE_2D"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
                       ,0x4a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  *param_7 = (float *)0x0;
  plVar1 = *(longlong **)((longlong)this->GPUPimpl + 0x10);
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_1,param_7);
  pFVar6 = ::FName::FName(&local_30,local_40);
  *param_2 = *pFVar6;
  *param_5 = (uint)(local_res8[0] != 1);
  *param_6 = local_48[0] == 0;
  if (((local_40 != (char *)0x0) && (*param_3 != 0)) &&
     ((*param_4 != 0 && (*param_7 != (float *)0x0)))) {
    return true;
  }
  return false;
}

// IsValid @ 14d763cf0

bool __thiscall FOpenColorIOWrapperGPUProcessor::IsValid(FOpenColorIOWrapperGPUProcessor *this)

{
  if (((*(longlong *)(this->ParentProcessor).Pimpl != 0) && (*(longlong *)this->GPUPimpl != 0)) &&
     (*(longlong *)((longlong)this->GPUPimpl + 0x10) != 0)) {
    return true;
  }
  return false;
}

// operator() @ 150586620

bool __thiscall
`FOpenColorIOWrapperGPUProcessor::GetShader'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7996336546523382864>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7996336546523382864>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

