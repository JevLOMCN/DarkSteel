// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 148675060

UClass * __cdecl USoundNodeDistanceCrossFade::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDistanceCrossFade",
               &Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton,
               StaticRegisterNativesUSoundNodeDistanceCrossFade,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeDistanceCrossFade>,
               InternalVTableHelperCtorCaller<USoundNodeDistanceCrossFade>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton;
}

// USoundNodeDistanceCrossFade @ 1486974c0

USoundNodeDistanceCrossFade * __thiscall
USoundNodeDistanceCrossFade::USoundNodeDistanceCrossFade
          (USoundNodeDistanceCrossFade *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeDistanceCrossFade__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CrossFadeInput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrossFadeInput).ArrayNum = 0;
  (this->CrossFadeInput).ArrayMax = 0;
  return this;
}

// USoundNodeDistanceCrossFade @ 148697500

USoundNodeDistanceCrossFade * __thiscall
USoundNodeDistanceCrossFade::USoundNodeDistanceCrossFade
          (USoundNodeDistanceCrossFade *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeDistanceCrossFade__6B_;
  (this->CrossFadeInput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrossFadeInput).ArrayNum = 0;
  (this->CrossFadeInput).ArrayMax = 0;
  return this;
}

// ~USoundNodeDistanceCrossFade @ 14869b920

void __thiscall
USoundNodeDistanceCrossFade::~USoundNodeDistanceCrossFade(USoundNodeDistanceCrossFade *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeDistanceCrossFade__6B_;
  pFVar1 = (this->CrossFadeInput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AllowCrossfading @ 1486a61a0

bool __thiscall
USoundNodeDistanceCrossFade::AllowCrossfading
          (USoundNodeDistanceCrossFade *this,FActiveSound *param_1)

{
  return param_1->bLocationDefined;
}

// CreateStartingConnectors @ 1486af470

void __thiscall
USoundNodeDistanceCrossFade::CreateStartingConnectors(USoundNodeDistanceCrossFade *this)

{
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001486af493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
  return;
}

// GetCurrentDistance @ 1486bd060

float __thiscall
USoundNodeDistanceCrossFade::GetCurrentDistance
          (USoundNodeDistanceCrossFade *this,FAudioDevice *param_1,FActiveSound *param_2,
          FSoundParseParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  TVector<double>_u_0 local_38 [2];
  
  if (param_2->bLocationDefined == '\0') {
    return 0.0;
  }
  if (param_1 == (FAudioDevice *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeDistanceCrossFade.cpp"
                       ,0xc3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  iVar3 = FActiveSound::GetClosestListenerIndex(param_2);
  FAudioDevice::GetListenerPosition(param_1,iVar3,(TVector<double> *)&local_38[0]._s_0,true);
  dVar8 = (double)local_38[0]._0_8_ - (param_3->Transform).Translation.XY.m128d_f64[0];
  dVar9 = (double)local_38[0]._8_8_ - (param_3->Transform).Translation.XY.m128d_f64[1];
  dVar5 = (double)local_38[0]._16_8_ - (param_3->Transform).Translation.ZW.m128d_f64[0];
  auVar6._0_8_ = dVar5 * dVar5;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar9 * dVar9 + dVar8 * dVar8 + auVar6._0_8_;
  auVar7 = sqrtpd(auVar6,auVar7);
  return (float)auVar7._0_8_;
}

// GetMaxChildNodes @ 1486c1230

int __thiscall USoundNodeDistanceCrossFade::GetMaxChildNodes(USoundNodeDistanceCrossFade *this)

{
  return 0x20;
}

// GetMaxDistance @ 1486c14b0

float __thiscall USoundNodeDistanceCrossFade::GetMaxDistance(USoundNodeDistanceCrossFade *this)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  UObject *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res8 [8];
  
  uVar7 = 0;
  fVar11 = 0.0;
  if (0 < (this->CrossFadeInput).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->CrossFadeInput).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        fVar11 = (float)(*pcVar4)();
        return fVar11;
      }
      fVar10 = *(float *)((this->CrossFadeInput).AllocatorInstance.Data + lVar9 + 4);
      uVar6 = 0;
      if ((int)uVar7 < (this->CrossFadeInput).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        fVar11 = (float)(*pcVar4)();
        return fVar11;
      }
      if (fVar10 <= fVar11) {
        fVar10 = fVar11;
      }
      uVar7 = uVar7 + 1;
      fVar2 = *(float *)((this->CrossFadeInput).AllocatorInstance.Data + lVar9 + 0xc);
      fVar11 = fVar10;
      if (fVar10 <= fVar2) {
        fVar11 = fVar2;
      }
      lVar9 = lVar9 + 0x14;
    } while ((int)uVar7 < (this->CrossFadeInput).ArrayNum);
  }
  puVar8 = (undefined8 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  puVar1 = puVar8 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar8 == puVar1) break;
    this_00 = (UObject *)*puVar8;
    fVar10 = fVar11;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      fVar10 = (float)(**(code **)(*(longlong *)this_00 + 0x2b8))(this_00);
      if (fVar10 <= fVar11) {
        fVar10 = fVar11;
      }
    }
    puVar8 = puVar8 + 1;
    fVar11 = fVar10;
  }
  return fVar11;
}

// GetNumSounds @ 1486c2d90

int __thiscall
USoundNodeDistanceCrossFade::GetNumSounds
          (USoundNodeDistanceCrossFade *this,ulong64 param_1,FActiveSound *param_2)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulong64 local_res10;
  uint local_res18 [4];
  ulong64 *local_38;
  uint *local_30;
  
  local_res10 = param_1;
  puVar6 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_2->SoundNodeOffsetMap,param_1);
  pTVar2 = &param_2->SoundNodeData;
  piVar1 = &(param_2->SoundNodeData).ArrayNum;
  if (puVar6 == (uint *)0x0) {
    local_res18[0] =
         UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (1,1,8,&pTVar2->AllocatorInstance,piVar1,&(param_2->SoundNodeData).ArrayMax);
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (int)local_res18[0]) = 0;
    local_38 = &local_res10;
    local_30 = local_res18;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_2->SoundNodeOffsetMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)(local_res18 + 2),
               (bool *)&local_38);
    lVar9 = (longlong)(int)local_res18[0];
    uVar7 = 0;
    if ((int)local_res18[0] < *piVar1) {
      uVar7 = ~local_res18[0] >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar9) = 1;
  }
  else {
    uVar7 = 0;
    if ((int)*puVar6 < *piVar1) {
      uVar7 = ~*puVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    local_res18[0] = *puVar6;
  }
  uVar8 = local_res18[0] + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_res18[0] = uVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  return *(int *)((pTVar2->AllocatorInstance).Data + (int)uVar8);
}

// GetPrivateStaticClass @ 1486c4b70

UClass * __cdecl USoundNodeDistanceCrossFade::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDistanceCrossFade",
               &Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton,
               StaticRegisterNativesUSoundNodeDistanceCrossFade,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeDistanceCrossFade>,
               InternalVTableHelperCtorCaller<USoundNodeDistanceCrossFade>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton;
}

// InsertChildNode @ 1486d03f0

void __thiscall
USoundNodeDistanceCrossFade::InsertChildNode(USoundNodeDistanceCrossFade *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  USoundNode::InsertChildNode((USoundNode *)this,param_1);
  iVar6 = (this->CrossFadeInput).ArrayNum;
  if (iVar6 <= param_1) {
    piVar1 = &(this->CrossFadeInput).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,&(this->CrossFadeInput).AllocatorInstance,piVar1);
      (this->CrossFadeInput).ArrayNum = iVar6;
    }
    (this->CrossFadeInput).ArrayNum = iVar6 + 1;
    pFVar2 = (this->CrossFadeInput).AllocatorInstance.Data + lVar8 * 0x14;
    memmove(pFVar2 + 0x14,pFVar2,(longlong)(iVar6 - param_1) * 0x14);
    pFVar3 = (this->CrossFadeInput).AllocatorInstance.Data;
    pFVar2 = pFVar3 + lVar8 * 0x14;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
    *(undefined4 *)(pFVar3 + lVar8 * 0x14 + 0x10) = 0;
    uVar7 = 0;
    if (param_1 < (this->CrossFadeInput).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined4 *)((this->CrossFadeInput).AllocatorInstance.Data + lVar8 * 0x14 + 0x10) =
         0x3f800000;
  }
  return;
}

// ParseNodes @ 1486db550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeDistanceCrossFade::ParseNodes
          (USoundNodeDistanceCrossFade *this,FAudioDevice *param_1,ulong64 param_2,
          FActiveSound *param_3,FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  code *pcVar9;
  float fVar10;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  ulong64 uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_398 [32];
  uint local_364;
  FActiveSound *local_360;
  longlong local_358;
  int local_350;
  ulong64 local_348;
  FSoundParseParameters *local_340;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_338;
  FAudioDevice *local_330;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_328;
  uint *local_318;
  FSoundParseParameters local_308;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  uVar19 = 0;
  uVar21 = 0;
  local_340 = param_4;
  local_338 = param_5;
  local_360 = param_3;
  local_348 = param_2;
  local_330 = param_1;
  FSoundParseParameters::FSoundParseParameters(&local_308,param_4);
  fVar10 = __real_3f800000;
  uVar22 = 0;
  if (0 < (int)this->_padding_) {
    local_358 = 0;
    uVar24 = uVar19;
    uVar25 = uVar19;
    do {
      lVar20 = local_358;
      uVar17 = (uint)uVar19;
      uVar23 = ~uVar17 >> 0x1f;
      uVar14 = 0;
      uVar18 = uVar14;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar18 = uVar23;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(longlong *)(lVar20 + this->_padding_) != 0) {
        uVar18 = uVar14;
        if ((int)uVar17 < (this->CrossFadeInput).ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar27 = *(float *)((this->CrossFadeInput).AllocatorInstance.Data + uVar25);
        uVar18 = uVar14;
        if ((int)uVar17 < (this->CrossFadeInput).ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar3 = *(float *)((this->CrossFadeInput).AllocatorInstance.Data + uVar25 + 4);
        if ((int)uVar17 < (this->CrossFadeInput).ArrayNum) {
          uVar14 = uVar23;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar4 = *(float *)((this->CrossFadeInput).AllocatorInstance.Data + uVar25 + 8);
        uVar18 = uVar22;
        if ((int)uVar17 < (this->CrossFadeInput).ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar5 = *(float *)((this->CrossFadeInput).AllocatorInstance.Data + uVar25 + 0xc);
        fVar26 = (float)(**(code **)(this->_padding_ + 0x360))(this,local_330,param_3,local_340);
        cVar13 = (**(code **)(this->_padding_ + 0x368))(this,param_3);
        if (cVar13 == '\0') {
LAB_1486db901:
          iVar7 = (this->CrossFadeInput).ArrayNum;
LAB_1486db907:
          uVar18 = uVar22;
          if ((int)uVar17 < iVar7) {
            uVar18 = uVar23;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar27 = *(float *)((this->CrossFadeInput).AllocatorInstance.Data + uVar25 + 0x10);
        }
        else if ((fVar26 < fVar27) || (fVar3 < fVar26)) {
          if ((fVar26 < fVar4) || (fVar5 < fVar26)) {
            if ((fVar3 <= fVar26) && (fVar26 <= fVar4)) goto LAB_1486db901;
          }
          else if (0.0 < fVar5) {
            uVar18 = uVar22;
            if ((int)uVar17 < (this->CrossFadeInput).ArrayNum) {
              uVar18 = uVar23;
            }
            if ((uVar18 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            fVar27 = (fVar10 - (fVar26 - fVar4) / (fVar5 - fVar4)) *
                     *(float *)((this->CrossFadeInput).AllocatorInstance.Data + uVar25 + 0x10);
            goto LAB_1486db957;
          }
          fVar27 = 0.0;
        }
        else {
          iVar7 = (this->CrossFadeInput).ArrayNum;
          if (fVar3 <= 0.0) goto LAB_1486db907;
          uVar18 = uVar22;
          if ((int)uVar17 < iVar7) {
            uVar18 = uVar23;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar27 = ((fVar26 - fVar27) / (fVar3 - fVar27)) *
                   *(float *)((this->CrossFadeInput).AllocatorInstance.Data + uVar25 + 0x10);
        }
LAB_1486db957:
        local_308.Volume = fVar27 * local_340->Volume;
        uVar19 = (ulonglong)((int)uVar24 + 1);
        if (fVar27 <= 0.0) {
          uVar19 = uVar24;
        }
        uVar24 = uVar19;
        local_350 = local_338->ArrayNum;
        uVar18 = uVar22;
        if ((int)uVar17 < (int)this->_padding_) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar8 = *(longlong **)(local_358 + this->_padding_);
        pcVar9 = *(code **)(*plVar8 + 0x2f0);
        uVar18 = uVar22;
        if ((int)uVar17 < (int)this->_padding_) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar15 = USoundNode::GetNodeWaveInstanceHash
                           (local_348,*(USoundNode **)(local_358 + this->_padding_),uVar17);
        pTVar11 = local_338;
        (*pcVar9)(plVar8,local_330,uVar15,local_360);
        param_3 = local_360;
        if ((((param_3->bFinished != '\0') && (fVar27 <= 0.0)) && (local_350 == pTVar11->ArrayNum))
           && (cVar13 = (**(code **)(((local_360->Sound).field0_0x0.DebugPtr)->_padding_ + 0x310))()
              , cVar13 == '\0')) {
          param_3->bFinished = '\x01';
        }
      }
      uVar21 = (undefined4)uVar24;
      local_358 = local_358 + 8;
      uVar19 = (ulonglong)(uVar17 + 1);
      uVar25 = uVar25 + 0x14;
    } while ((int)(uVar17 + 1) < (int)this->_padding_);
  }
  puVar16 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
            ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                    *)&param_3->SoundNodeOffsetMap,local_348);
  pTVar2 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar16 == (uint *)0x0) {
    local_364 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,8,&pTVar2->AllocatorInstance,piVar1,
                           &(param_3->SoundNodeData).ArrayMax);
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (int)local_364) = 0;
    local_328.Value = (uint *)&local_348;
    local_318 = &local_364;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,&local_328,(bool *)&local_328.Value);
    lVar20 = (longlong)(int)local_364;
    uVar18 = uVar22;
    if ((int)local_364 < *piVar1) {
      uVar18 = ~local_364 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar20) = 1;
  }
  else {
    uVar18 = uVar22;
    if ((int)*puVar16 < *piVar1) {
      uVar18 = ~*puVar16 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_364 = *puVar16;
  }
  uVar18 = local_364 + 4;
  if ((int)uVar18 < *piVar1) {
    uVar22 = ~uVar18 >> 0x1f;
  }
  local_364 = uVar18;
  if ((uVar22 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  *(undefined4 *)((pTVar2->AllocatorInstance).Data + (int)uVar18) = uVar21;
  FSoundParseParameters::~FSoundParseParameters(&local_308);
  return;
}

// RemoveChildNode @ 1486e8210

void __thiscall
USoundNodeDistanceCrossFade::RemoveChildNode(USoundNodeDistanceCrossFade *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  USoundNode::RemoveChildNode((USoundNode *)this,param_1);
  uVar4 = 0;
  if (param_1 < (this->CrossFadeInput).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  _Dst = (this->CrossFadeInput).AllocatorInstance.Data + (longlong)param_1 * 0x14;
  iVar5 = (this->CrossFadeInput).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x14,(longlong)iVar5 * 0x14);
  }
  piVar1 = &(this->CrossFadeInput).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,&(this->CrossFadeInput).AllocatorInstance,(this->CrossFadeInput).ArrayNum,
             &(this->CrossFadeInput).ArrayMax);
  return;
}

// StaticRegisterNativesUSoundNodeDistanceCrossFade @ 1486f1920

void __cdecl USoundNodeDistanceCrossFade::StaticRegisterNativesUSoundNodeDistanceCrossFade(void)

{
  return;
}

