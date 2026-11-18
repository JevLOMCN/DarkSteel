// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 1

// FOpenColorIOWrapperEngineConfig @ 14d75e250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOpenColorIOWrapperEngineConfig * __thiscall
FOpenColorIOWrapperEngineConfig::FOpenColorIOWrapperEngineConfig
          (FOpenColorIOWrapperEngineConfig *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t wVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  shared_ptr<OpenColorIO_v2_4::Config_const_> *psVar9;
  FColorSpace *pFVar10;
  FColorSpace *pFVar11;
  FColorSpaceTransform *pFVar12;
  FOpenColorIOWrapperEngineConfig *pFVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_398 [32];
  ColorSpace *local_378;
  longlong *plStack_370;
  Config *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *plStack_350;
  longlong *local_348;
  longlong *plStack_340;
  ColorSpace *local_338;
  longlong *plStack_330;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  char local_298 [128];
  void *local_218;
  char *local_210;
  undefined4 local_208;
  FColorSpaceTransform local_1f8;
  FColorSpace local_178;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_398;
  FOpenColorIOWrapperConfig::FOpenColorIOWrapperConfig((FOpenColorIOWrapperConfig *)this);
  *(undefined ***)this = &___7FOpenColorIOWrapperEngineConfig__6B_;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId443,
               "FOpenColorIOWrapperConfig::CreateWorkingColorSpaceToInterchangeConfig",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
               ,0x1bb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId443);
  }
  psVar9 = OpenColorIO_v2_4::Config::CreateFromBuiltinConfig
                     ((shared_ptr<OpenColorIO_v2_4::Config_const_> *)local_328,
                      "studio-config-v1.0.0_aces-v1.3_ocio-v2.1");
  OpenColorIO_v2_4::Config::createEditableCopy
            (*(Config **)psVar9,(shared_ptr<OpenColorIO_v2_4::Config> *)&local_368);
  if ((longlong *)local_328._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar6 = (longlong *)(local_328._8_8_ + 8);
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (*(code *)**(undefined8 **)local_328._8_8_)(local_328._8_8_);
      LOCK();
      piVar1 = (int *)(local_328._8_8_ + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)local_328._8_8_ + 8))(local_328._8_8_);
      }
    }
  }
  OpenColorIO_v2_4::ColorSpace::Create((shared_ptr<OpenColorIO_v2_4::ColorSpace> *)&local_378);
  lVar15 = 0;
  local_218 = (void *)0x0;
  bVar8 = false;
  local_208 = 0x13;
  lVar14 = lVar15;
  do {
    wVar4 = L"Working Color Space"[lVar14];
    local_298[lVar14] = (char)wVar4;
    lVar14 = lVar14 + 1;
    bVar8 = (bool)(bVar8 | 0x7f < (ushort)wVar4);
  } while (lVar14 < 0x14);
  if (bVar8) {
    do {
      if (0x7f < (ushort)L"Working Color Space"[lVar15]) {
        local_298[lVar15] = '?';
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < 0x14);
  }
  local_210 = local_298;
  OpenColorIO_v2_4::ColorSpace::setName(local_378,local_298);
  if (local_218 != (void *)0x0) {
    FMemory::Free(local_218);
  }
  OpenColorIO_v2_4::ColorSpace::setBitDepth(local_378,BIT_DEPTH_F32);
  OpenColorIO_v2_4::ColorSpace::setEncoding(local_378,"scene-linear");
  pFVar10 = UE::Color::FColorSpace::FColorSpace(&local_178,ACESAP0);
  pFVar11 = UE::Color::FColorSpace::GetWorking();
  pFVar12 = UE::Color::FColorSpaceTransform::FColorSpaceTransform
                      (&local_1f8,pFVar11,pFVar10,Bradford);
  local_318 = *(undefined8 *)pFVar12;
  local_310 = *(undefined8 *)&pFVar12->field_0x20;
  local_308 = *(undefined8 *)&pFVar12->field_0x40;
  local_300 = *(undefined8 *)&pFVar12->field_0x60;
  local_2f8 = *(undefined8 *)&pFVar12->field_0x8;
  local_2f0 = *(undefined8 *)&pFVar12->field_0x28;
  local_2e8 = *(undefined8 *)&pFVar12->field_0x48;
  local_2e0 = *(undefined8 *)&pFVar12->field_0x68;
  local_2d8 = *(undefined8 *)&pFVar12->field_0x10;
  local_2d0 = *(undefined8 *)&pFVar12->field_0x30;
  local_2c8 = *(undefined8 *)&pFVar12->field_0x50;
  local_2c0 = *(undefined8 *)&pFVar12->field_0x70;
  local_2b8 = *(undefined8 *)&pFVar12->field_0x18;
  local_2b0 = *(undefined8 *)&pFVar12->field_0x38;
  local_2a8 = *(undefined8 *)&pFVar12->field_0x58;
  local_2a0 = *(undefined8 *)&pFVar12->field_0x78;
  OpenColorIO_v2_4::MatrixTransform::Create
            ((shared_ptr<OpenColorIO_v2_4::MatrixTransform> *)&local_358);
  (**(code **)(*local_358 + 0x50))(local_358,&local_318);
  if (plStack_350 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_350 + 1) = (int)plStack_350[1] + 1;
    UNLOCK();
  }
  local_348 = local_358;
  plStack_340 = plStack_350;
  OpenColorIO_v2_4::ColorSpace::setTransform
            (local_378,(shared_ptr<OpenColorIO_v2_4::Transform_const_> *)&local_348,
             COLORSPACE_DIR_TO_REFERENCE);
  plVar6 = plStack_340;
  if (plStack_340 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_340 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_340)(plStack_340);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (plStack_370 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_370 + 1) = (int)plStack_370[1] + 1;
    UNLOCK();
  }
  local_338 = local_378;
  plStack_330 = plStack_370;
  OpenColorIO_v2_4::Config::addColorSpace
            (local_368,(shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *)&local_338);
  plVar6 = plStack_330;
  if (plStack_330 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_330 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_330)(plStack_330);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  puVar5 = *(undefined8 **)&this->field_0x8;
  if (local_360 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_360 + 1) = (int)local_360[1] + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar5[1];
  *puVar5 = local_368;
  puVar5[1] = local_360;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if ((**(longlong **)&this->field_0x8 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
                         ,0x1cf,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FOpenColorIOWrapperEngineConfig *)(*pcVar7)();
    return pFVar13;
  }
  if (plStack_350 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_350 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_350)(plStack_350);
      LOCK();
      piVar1 = (int *)((longlong)plStack_350 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_350 + 8))(plStack_350);
      }
    }
  }
  if (plStack_370 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_370 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_370)(plStack_370);
      LOCK();
      piVar1 = (int *)((longlong)plStack_370 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_370 + 8))(plStack_370);
      }
    }
  }
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_360 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar1 = (int *)((longlong)local_360 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_360 + 8))(local_360);
      }
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

