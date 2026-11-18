// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1486773e0

UClass * __cdecl USoundNodeEnveloper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeEnveloper",
               &Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton,
               StaticRegisterNativesUSoundNodeEnveloper,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeEnveloper>,
               InternalVTableHelperCtorCaller<USoundNodeEnveloper>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton;
}

// USoundNodeEnveloper @ 1486975c0

USoundNodeEnveloper * __thiscall
USoundNodeEnveloper::USoundNodeEnveloper(USoundNodeEnveloper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->VolumeInterpCurve_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloatConstantCurve *)0x0;
  (this->PitchInterpCurve_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloatConstantCurve *)0x0;
  this->_padding_ = (longlong)&___7USoundNodeEnveloper__6B_;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->VolumeCurve);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->PitchCurve);
  return this;
}

// USoundNodeEnveloper @ 148697620

USoundNodeEnveloper * __thiscall
USoundNodeEnveloper::USoundNodeEnveloper(USoundNodeEnveloper *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeEnveloper__6B_;
  (this->VolumeInterpCurve_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloatConstantCurve *)0x0;
  (this->PitchInterpCurve_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloatConstantCurve *)0x0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->VolumeCurve);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->PitchCurve);
  this->PitchMin = 1.0;
  this->PitchMax = 1.0;
  this->VolumeMin = 1.0;
  this->VolumeMax = 1.0;
  return this;
}

// ~USoundNodeEnveloper @ 14869b9b0

void __thiscall USoundNodeEnveloper::~USoundNodeEnveloper(USoundNodeEnveloper *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7USoundNodeEnveloper__6B_;
  pFVar1 = (this->PitchCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PitchCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->PitchCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->PitchCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->PitchCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PitchCurve).EditorCurveData._padding_);
  pFVar1 = (this->VolumeCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->VolumeCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->VolumeCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->VolumeCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->VolumeCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->VolumeCurve).EditorCurveData._padding_);
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDuration @ 1486bdee0

float __thiscall USoundNodeEnveloper::GetDuration(USoundNodeEnveloper *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (((int)this->_padding_ < 1) || (*(longlong *)this->_padding_ == 0)) {
    fVar3 = 0.0;
  }
  else {
    if ((int)this->_padding_ < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    fVar3 = (float)(**(code **)(**(longlong **)this->_padding_ + 0x2c8))();
  }
  if (this->bLoop != 0) {
    if (this->bLoopIndefinitely != 0) {
      return __real_461c4000;
    }
    fVar3 = (this->LoopEnd - this->LoopStart) * (float)this->LoopCount + this->LoopStart +
            this->DurationAfterLoop;
  }
  return fVar3;
}

// GetPrivateStaticClass @ 1486c4cf0

UClass * __cdecl USoundNodeEnveloper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeEnveloper",
               &Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton,
               StaticRegisterNativesUSoundNodeEnveloper,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeEnveloper>,
               InternalVTableHelperCtorCaller<USoundNodeEnveloper>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton;
}

// ParseNodes @ 1486dc220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeEnveloper::ParseNodes
          (USoundNodeEnveloper *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  FRichCurve *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_328 [32];
  uint local_2f8 [2];
  ulong64 local_2f0;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_2e8;
  FAudioDevice *local_2d8;
  ulong64 *local_2d0;
  uint *local_2c8;
  FSoundParseParameters local_2b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2e8.Value = (uint *)param_5;
  local_2f0 = param_2;
  local_2d8 = param_1;
  puVar8 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
  pTVar2 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar8 == (uint *)0x0) {
    local_2f8[0] = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,0x14,&pTVar2->AllocatorInstance,piVar1,
                              &(param_3->SoundNodeData).ArrayMax);
    pFVar11 = (pTVar2->AllocatorInstance).Data + (int)local_2f8[0];
    *(undefined8 *)pFVar11 = 0;
    *(undefined8 *)(pFVar11 + 8) = 0;
    *(undefined4 *)(pFVar11 + 0x10) = 0;
    local_2d0 = &local_2f0;
    local_2c8 = local_2f8;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,&local_2e8,(bool *)&local_2d0);
    lVar13 = (longlong)(int)local_2f8[0];
    uVar7 = 0;
    if ((int)local_2f8[0] < *piVar1) {
      uVar7 = ~local_2f8[0] >> 0x1f;
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
    pFVar11 = (pTVar2->AllocatorInstance).Data + lVar13;
    *(int *)pFVar11 = 1;
  }
  else {
    uVar7 = *puVar8;
    uVar12 = 0;
    if ((int)uVar7 < *piVar1) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_2f8[0] = *puVar8;
    pFVar11 = (pTVar2->AllocatorInstance).Data + (int)uVar7;
  }
  uVar12 = local_2f8[0] + 4;
  uVar7 = 0;
  if ((int)uVar12 < *piVar1) {
    uVar7 = ~uVar12 >> 0x1f;
  }
  local_2f8[0] = uVar12;
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
  fVar3 = __real_3f800000;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (*(int *)pFVar11 != 0) {
    *(float *)(pFVar4 + (int)uVar12) = param_3->PlaybackTimeNonVirtualized - param_4->StartTime;
    uVar7 = *(int *)((longlong)&this->_padding_ + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)&this->_padding_ + 4) = uVar7;
    *(float *)(pFVar4 + (longlong)(int)uVar12 + 4) =
         (this->VolumeMin - this->VolumeMax) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar3) +
         this->VolumeMax;
    uVar7 = *(int *)((longlong)&this->_padding_ + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)&this->_padding_ + 4) = uVar7;
    *(float *)(pFVar4 + (longlong)(int)uVar12 + 8) =
         (this->PitchMin - this->PitchMax) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar3) +
         this->PitchMax;
    *(undefined4 *)(pFVar4 + (longlong)(int)uVar12 + 0xc) = 0xffffffff;
    *(int *)pFVar11 = 0;
  }
  fVar16 = param_3->PlaybackTimeNonVirtualized - *(float *)(pFVar4 + (int)uVar12);
  if ((this->bLoop != 0) && (this->LoopEnd <= fVar16 && fVar16 != this->LoopEnd)) {
    fVar14 = (float)(**(code **)(this->_padding_ + 0x2c8))(this);
    if (fVar14 < fVar16) {
      return;
    }
    fVar15 = this->LoopEnd - this->LoopStart;
    fVar14 = fVar15;
    if (fVar15 <= __real_322bcc77) {
      fVar14 = __real_322bcc77;
    }
    iVar10 = (int)((float)(int)(fVar16 - this->LoopStart) / fVar14);
    fVar16 = fVar16 - (float)iVar10 * fVar15;
    if (((iVar10 == this->LoopCount) && (this->bLoopIndefinitely == 0)) && (this->LoopCount != 0)) {
      fVar16 = fVar16 + fVar15;
    }
    else if (iVar10 != *(int *)(pFVar4 + (longlong)(int)uVar12 + 0xc)) {
      uVar7 = *(int *)((longlong)&this->_padding_ + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)((longlong)&this->_padding_ + 4) = uVar7;
      *(float *)(pFVar4 + (longlong)(int)uVar12 + 4) =
           (this->VolumeMin - this->VolumeMax) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar3) +
           this->VolumeMax;
      uVar7 = *(int *)((longlong)&this->_padding_ + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)((longlong)&this->_padding_ + 4) = uVar7;
      *(float *)(pFVar4 + (longlong)(int)uVar12 + 8) =
           (this->PitchMin - this->PitchMax) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar3) +
           this->PitchMax;
      *(int *)(pFVar4 + (longlong)(int)uVar12 + 0xc) = iVar10;
    }
  }
  FSoundParseParameters::FSoundParseParameters(&local_2b8,param_4);
  pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->VolumeCurve);
  fVar3 = *(float *)(pFVar4 + (longlong)(int)uVar12 + 4);
  fVar14 = FRichCurve::Eval(pFVar9,fVar16,0.0);
  local_2b8.Volume = local_2b8.Volume * fVar14 * fVar3;
  pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->PitchCurve);
  fVar3 = *(float *)(pFVar4 + (longlong)(int)uVar12 + 8);
  fVar16 = FRichCurve::Eval(pFVar9,fVar16,0.0);
  local_2b8.Pitch = local_2b8.Pitch * fVar16 * fVar3;
  USoundNode::ParseNodes
            ((USoundNode *)this,local_2d8,local_2f0,param_3,&local_2b8,
             (TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *)local_2e8.Value);
  FSoundParseParameters::~FSoundParseParameters(&local_2b8);
  return;
}

// PostInitProperties @ 1486dff40

void __thiscall USoundNodeEnveloper::PostInitProperties(USoundNodeEnveloper *this)

{
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [8];
  uint in_stack_ffffffffffffffe8;
  FKeyHandle FVar1;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    FKeyHandle::FKeyHandle(local_res8);
    FVar1.Index = in_stack_ffffffffffffffe8 & 0xffffff00;
    FRichCurve::AddKey(&(this->VolumeCurve).EditorCurveData,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
    FKeyHandle::FKeyHandle(local_res8);
    FRichCurve::AddKey(&(this->PitchCurve).EditorCurveData,in_XMM1_Da,0.0,(bool)in_R9B,
                       (FKeyHandle)(FVar1.Index & 0xffffff00));
  }
  return;
}

// Serialize @ 1486ecec0

void __thiscall USoundNodeEnveloper::Serialize(USoundNodeEnveloper *this,FArchive *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDistributionFloatConstantCurve *pUVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *in_R9;
  FPackageFileVersion *pFVar8;
  float in_XMM1_Da;
  FStripDataFlags local_res10 [4];
  FKeyHandle local_res18 [4];
  ulonglong in_stack_ffffffffffffffb8;
  FKeyHandle local_38 [4];
  
  UObject::Serialize((UObject *)this,param_1);
  if (0x1e4 < *(int *)&param_1->field_0x40) {
    pFVar8 = &GOldestLoadablePackageFileUEVersion;
    FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
    in_R9 = (wchar_t *)pFVar8;
  }
  if (((param_1->field_0x28 & 1) != 0) && (*(int *)&param_1->field_0x40 < 299)) {
    if ((this->VolumeInterpCurve_DEPRECATED).field0_0x0.DebugPtr !=
        (UDistributionFloatConstantCurve *)0x0) {
      FRichCurve::Reset(&(this->VolumeCurve).EditorCurveData);
      pUVar5 = (this->VolumeInterpCurve_DEPRECATED).field0_0x0.DebugPtr;
      uVar7 = 0;
      if (0 < *(int *)&(pUVar5->ConstantCurve).field_0x8) {
        lVar6 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < *(int *)&(pUVar5->ConstantCurve).field_0x8) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if (uVar4 == 0) {
            in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
            in_stack_ffffffffffffffb8 = (ulonglong)(int)uVar7;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          lVar1 = *(longlong *)&pUVar5->ConstantCurve;
          FKeyHandle::FKeyHandle(local_res18);
          in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffffffffff00;
          FRichCurve::AddKey(&(this->VolumeCurve).EditorCurveData,in_XMM1_Da,
                             *(float *)(lVar1 + lVar6),SUB81(in_R9,0),
                             (FKeyHandle)(uint)in_stack_ffffffffffffffb8);
          pUVar5 = (this->VolumeInterpCurve_DEPRECATED).field0_0x0.DebugPtr;
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x14;
        } while ((int)uVar7 < *(int *)&(pUVar5->ConstantCurve).field_0x8);
      }
    }
    if ((this->PitchInterpCurve_DEPRECATED).field0_0x0.DebugPtr !=
        (UDistributionFloatConstantCurve *)0x0) {
      FRichCurve::Reset(&(this->PitchCurve).EditorCurveData);
      pUVar5 = (this->PitchInterpCurve_DEPRECATED).field0_0x0.DebugPtr;
      uVar7 = 0;
      if (0 < *(int *)&(pUVar5->ConstantCurve).field_0x8) {
        lVar6 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < *(int *)&(pUVar5->ConstantCurve).field_0x8) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if (uVar4 == 0) {
            in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
            in_stack_ffffffffffffffb8 = (ulonglong)(int)uVar7;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          lVar1 = *(longlong *)&pUVar5->ConstantCurve;
          FKeyHandle::FKeyHandle(local_38);
          in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffffffffff00;
          FRichCurve::AddKey(&(this->PitchCurve).EditorCurveData,in_XMM1_Da,
                             *(float *)(lVar1 + lVar6),SUB81(in_R9,0),
                             (FKeyHandle)(uint)in_stack_ffffffffffffffb8);
          pUVar5 = (this->PitchInterpCurve_DEPRECATED).field0_0x0.DebugPtr;
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x14;
        } while ((int)uVar7 < *(int *)&(pUVar5->ConstantCurve).field_0x8);
      }
    }
  }
  return;
}

// Serialize @ 1486ed0b0

void __thiscall
USoundNodeEnveloper::Serialize(USoundNodeEnveloper *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUSoundNodeEnveloper @ 1486f1940

void __cdecl USoundNodeEnveloper::StaticRegisterNativesUSoundNodeEnveloper(void)

{
  return;
}

