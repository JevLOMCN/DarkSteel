// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 37

// operator= @ 14609aa60

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::operator=
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *param_1)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FFrameNumber FVar4;
  
  FVar4.Value = (param_1->LinearTransform).Offset.FrameNumber.Value;
  pTVar1 = &param_1->NestedTransforms;
  (this->LinearTransform).TimeScale = (param_1->LinearTransform).TimeScale;
  (this->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar4.Value;
  pTVar2 = &this->NestedTransforms;
  (this->LinearTransform).Offset.SubFrame = (param_1->LinearTransform).Offset.SubFrame;
  if (pTVar2 != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data,
               (this->NestedTransforms).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NestedTransforms).ArrayNum = (param_1->NestedTransforms).ArrayNum;
    (this->NestedTransforms).ArrayMax = (param_1->NestedTransforms).ArrayMax;
    (param_1->NestedTransforms).ArrayNum = 0;
    (param_1->NestedTransforms).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14609aae0

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::operator=
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *param_1)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMovieSceneNestedSequenceTransform *pFVar4;
  FFrameNumber FVar5;
  
  FVar5.Value = (param_1->LinearTransform).Offset.FrameNumber.Value;
  (this->LinearTransform).TimeScale = (param_1->LinearTransform).TimeScale;
  (this->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar5.Value;
  pTVar1 = &this->NestedTransforms;
  (this->LinearTransform).Offset.SubFrame = (param_1->LinearTransform).Offset.SubFrame;
  if (pTVar1 != &param_1->NestedTransforms) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)(pTVar1->AllocatorInstance).Data,
               (this->NestedTransforms).ArrayNum);
    iVar3 = (param_1->NestedTransforms).ArrayNum;
    piVar2 = &(this->NestedTransforms).ArrayMax;
    pFVar4 = (FMovieSceneNestedSequenceTransform *)
             (param_1->NestedTransforms).AllocatorInstance.Data;
    (this->NestedTransforms).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

// StaticStruct @ 146167f50

UScriptStruct * __cdecl FMovieSceneSequenceTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform,(UObject *)pUVar1,
                         L"MovieSceneSequenceTransform");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTransform.OuterSingleton;
}

// FMovieSceneSequenceTransform @ 1461803e0

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::FMovieSceneSequenceTransform
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *param_1)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMovieSceneNestedSequenceTransform *pFVar4;
  FFrameNumber FVar5;
  
  FVar5.Value = (param_1->LinearTransform).Offset.FrameNumber.Value;
  pTVar1 = &this->NestedTransforms;
  (this->LinearTransform).TimeScale = (param_1->LinearTransform).TimeScale;
  (this->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar5.Value;
  (this->LinearTransform).Offset.SubFrame = (param_1->LinearTransform).Offset.SubFrame;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NestedTransforms).ArrayMax;
  iVar3 = (param_1->NestedTransforms).ArrayNum;
  pFVar4 = (FMovieSceneNestedSequenceTransform *)(param_1->NestedTransforms).AllocatorInstance.Data;
  (this->NestedTransforms).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// operator* @ 146187b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::operator*
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *__return_storage_ptr__,
          FMovieSceneSequenceTransform *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  FMovieSceneNestedSequenceTransform *pFVar4;
  code *pcVar5;
  FFrameNumber FVar6;
  float fVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uchar uVar10;
  uint uVar11;
  FMovieSceneTimeTransform *pFVar12;
  FMovieSceneSequenceTransform *pFVar13;
  longlong lVar14;
  FMovieSceneNumericVariant *this_00;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  undefined8 local_100;
  float local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  int iStack_e4;
  FMovieSceneSequenceTransform local_e0;
  FMovieSceneTimeTransform local_c0;
  FMovieSceneTimeTransform local_b0;
  FMovieSceneTimeTransform local_a0;
  FMovieSceneTimeTransform local_94;
  FMovieSceneNumericVariant local_88;
  FFrameTime local_78;
  undefined8 local_70;
  FMovieSceneNumericVariant local_68 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar2 = (this->NestedTransforms).ArrayNum;
  if ((iVar2 == 0) && ((param_1->NestedTransforms).ArrayNum == 0)) {
    pFVar12 = ::operator*(&local_a0,&this->LinearTransform,&param_1->LinearTransform);
    FVar6.Value = (pFVar12->Offset).FrameNumber.Value;
    fVar3 = (pFVar12->Offset).SubFrame;
    (__return_storage_ptr__->LinearTransform).TimeScale = pFVar12->TimeScale;
    (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar6.Value;
    (__return_storage_ptr__->LinearTransform).Offset.SubFrame = fVar3;
    (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
    (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  }
  else {
    if (iVar2 == 0) {
      iVar2 = (param_1->NestedTransforms).ArrayNum;
      fVar7 = (param_1->LinearTransform).TimeScale;
      FVar6.Value = (param_1->LinearTransform).Offset.FrameNumber.Value;
      fVar3 = (param_1->LinearTransform).Offset.SubFrame;
      pFVar4 = (FMovieSceneNestedSequenceTransform *)
               (param_1->NestedTransforms).AllocatorInstance.Data;
      local_110.Data = (FScriptContainerElement *)0x0;
      local_108 = iVar2;
      if (iVar2 == 0) {
        local_104 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar2,0,&local_110,iVar2,&local_104);
        ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                  (local_110.Data,pFVar4,iVar2);
      }
      fVar1 = __real_322bcc77;
      if ((((this->LinearTransform).Offset.FrameNumber.Value != 0) ||
          (__real_322bcc77 <
           (float)((uint)(this->LinearTransform).Offset.SubFrame &
                  __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_322bcc77 <
          (float)((uint)((this->LinearTransform).TimeScale - __real_3f800000) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        uVar11 = 0;
        if ((int)(local_108 - 1U) < local_108) {
          uVar11 = ~(local_108 - 1U) >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FMovieSceneSequenceTransform *)(*pcVar5)();
          return pFVar13;
        }
        iVar2 = local_108;
        FVar8.Data = local_110.Data;
        if (((*(ulonglong *)(local_110.Data + (longlong)local_108 * 0x20 + -0x20) &
             0xfff8000000000000) == 0xfff8000000000000) &&
           (uVar10 = FMovieSceneNumericVariant::GetTypeBits
                               ((FMovieSceneNumericVariant *)
                                (local_110.Data + (longlong)local_108 * 0x20 + -0x20)),
           uVar10 != 0xff)) {
          if (local_108 == local_104) {
            local_108 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&local_110,&local_104);
          }
          fVar1 = (this->LinearTransform).TimeScale;
          this_00 = (FMovieSceneNumericVariant *)(local_110.Data + (longlong)local_108 * 0x20);
          local_108 = local_108 + 1;
          FMovieSceneNumericVariant::FMovieSceneNumericVariant(this_00);
          FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)this_00,(double)fVar1);
          *(FFrameTime *)this_00[1].Data = (this->LinearTransform).Offset;
          this_00[1].WeakCustomGetter.WeakPtr = (FWeakObjectPtr)0x0;
        }
        else {
          local_c0.TimeScale =
               FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat
                         ((FMovieSceneTimeWarpVariant *)
                          (FVar8.Data + (longlong)iVar2 * 0x20 + -0x20));
          local_c0.Offset = *(FFrameTime *)(FVar8.Data + (longlong)iVar2 * 0x20 + -0x10);
          if (((float)((uint)local_c0.TimeScale & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar1)
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!FMath::IsNearlyZero(TimeScale)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                                    ,0x2c,
                                    L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                                   ), bVar9)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FMovieSceneSequenceTransform *)(*pcVar5)();
            return pFVar13;
          }
          ::operator*(&local_b0,&this->LinearTransform,&local_c0);
          FMovieSceneNumericVariant::FMovieSceneNumericVariant(local_68);
          FMovieSceneTimeWarpVariant::Set
                    ((FMovieSceneTimeWarpVariant *)local_68,(double)local_b0.TimeScale);
          *(FFrameTime *)(FVar8.Data + (longlong)iVar2 * 0x20 + -0x10) = local_b0.Offset;
          *(undefined8 *)(FVar8.Data + (longlong)iVar2 * 0x20 + -8) = 0;
          *(uchar (*) [8])(FVar8.Data + (longlong)iVar2 * 0x20 + -0x20) = local_68[0].Data;
          *(FWeakObjectPtr *)(FVar8.Data + (longlong)iVar2 * 0x20 + -0x18) =
               local_68[0].WeakCustomGetter.WeakPtr;
        }
      }
      (__return_storage_ptr__->LinearTransform).TimeScale = fVar7;
      (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar6.Value;
      (__return_storage_ptr__->LinearTransform).Offset.SubFrame = fVar3;
      (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = local_110.Data;
      (__return_storage_ptr__->NestedTransforms).ArrayNum = local_108;
    }
    else {
      if ((param_1->NestedTransforms).ArrayNum == 0) {
        local_100 = 0x3f800000;
        local_f8 = 0.0;
        local_f0.Data = (FScriptContainerElement *)0x0;
        local_e8 = 0;
        iStack_e4 = 0;
        pFVar12 = ::operator*(&local_94,&this->LinearTransform,&param_1->LinearTransform);
        local_100._0_4_ = pFVar12->TimeScale;
        local_100._4_4_ = (pFVar12->Offset).FrameNumber;
        local_f8 = (pFVar12->Offset).SubFrame;
        if ((TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *)&local_f0 !=
            &this->NestedTransforms) {
          iVar2 = (this->NestedTransforms).ArrayNum;
          pFVar4 = (FMovieSceneNestedSequenceTransform *)
                   (this->NestedTransforms).AllocatorInstance.Data;
          local_e8 = iVar2;
          if ((iVar2 != 0) || (iStack_e4 != 0)) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar2,iStack_e4,&local_f0,iVar2,&iStack_e4);
            ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                      (local_f0.Data,pFVar4,iVar2);
            local_100._4_4_ = (undefined4)((ulonglong)local_100 >> 0x20);
          }
        }
        (__return_storage_ptr__->LinearTransform).TimeScale = (float)(undefined4)local_100;
        (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = (FFrameNumber)local_100._4_4_
        ;
        (__return_storage_ptr__->LinearTransform).Offset.SubFrame = local_f8;
        (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = local_f0.Data;
        (__return_storage_ptr__->NestedTransforms).ArrayNum = local_e8;
        (__return_storage_ptr__->NestedTransforms).ArrayMax = iStack_e4;
        return __return_storage_ptr__;
      }
      FMovieSceneSequenceTransform(&local_e0,param_1);
      if ((((this->LinearTransform).Offset.FrameNumber.Value != 0) ||
          (__real_322bcc77 <
           (float)((uint)(this->LinearTransform).Offset.SubFrame &
                  __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_322bcc77 <
          (float)((uint)((this->LinearTransform).TimeScale - __real_3f800000) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        fVar3 = (this->LinearTransform).TimeScale;
        FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_88);
        FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_88,(double)fVar3);
        local_78 = (this->LinearTransform).Offset;
        local_70 = 0;
        if (((local_e0.NestedTransforms.AllocatorInstance.Data <= &local_88) &&
            (&local_88 <
             (FMovieSceneNumericVariant *)
             (local_e0.NestedTransforms.AllocatorInstance.Data +
             (longlong)local_e0.NestedTransforms.ArrayMax * 0x20))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FMovieSceneSequenceTransform *)(*pcVar5)();
          return pFVar13;
        }
        if (local_e0.NestedTransforms.ArrayNum == local_e0.NestedTransforms.ArrayMax) {
          local_e0.NestedTransforms.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_e0.NestedTransforms.AllocatorInstance,
                          &local_e0.NestedTransforms.ArrayMax);
        }
        lVar14 = (longlong)local_e0.NestedTransforms.ArrayNum * 0x20;
        *(uchar (*) [8])(local_e0.NestedTransforms.AllocatorInstance.Data + lVar14) = local_88.Data;
        *(FWeakObjectPtr *)(local_e0.NestedTransforms.AllocatorInstance.Data + lVar14 + 8) =
             local_88.WeakCustomGetter.WeakPtr;
        *(FFrameTime *)(local_e0.NestedTransforms.AllocatorInstance.Data + lVar14 + 0x10) = local_78
        ;
        *(undefined8 *)(local_e0.NestedTransforms.AllocatorInstance.Data + lVar14 + 0x18) = local_70
        ;
        local_e0.NestedTransforms.ArrayNum = local_e0.NestedTransforms.ArrayNum + 1;
      }
      TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::
      Append<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>
                (&local_e0.NestedTransforms,&this->NestedTransforms);
      (__return_storage_ptr__->LinearTransform).TimeScale = local_e0.LinearTransform.TimeScale;
      (__return_storage_ptr__->LinearTransform).Offset.FrameNumber =
           (FFrameNumber)local_e0.LinearTransform.Offset.FrameNumber.Value;
      (__return_storage_ptr__->LinearTransform).Offset.SubFrame =
           local_e0.LinearTransform.Offset.SubFrame;
      (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data =
           local_e0.NestedTransforms.AllocatorInstance.Data;
      (__return_storage_ptr__->NestedTransforms).ArrayNum = local_e0.NestedTransforms.ArrayNum;
      local_104 = local_e0.NestedTransforms.ArrayMax;
    }
    (__return_storage_ptr__->NestedTransforms).ArrayMax = local_104;
  }
  return __return_storage_ptr__;
}

// Add @ 14618c730

void __thiscall
FMovieSceneSequenceTransform::Add
          (FMovieSceneSequenceTransform *this,FFrameTime param_1,FMovieSceneTimeWarpVariant *param_2
          )

{
  int *piVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  FFrameNumber FVar4;
  float fVar5;
  uchar uVar6;
  bool bVar7;
  int iVar8;
  UMovieSceneTimeWarpGetter *this_00;
  FMovieSceneTimeTransform *pFVar9;
  FMovieSceneNumericVariant *pFVar10;
  float fVar11;
  FMovieSceneTimeTransform local_48;
  FMovieSceneTimeTransform local_38 [4];
  
  if (((*(ulonglong *)(param_2->Variant).Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     (uVar6 = FMovieSceneNumericVariant::GetTypeBits(&param_2->Variant), uVar6 != 0xff)) {
    if (((*(ulonglong *)(param_2->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) ||
       (((uVar6 = FMovieSceneNumericVariant::GetTypeBits(&param_2->Variant), uVar6 != '\0' ||
         (this_00 = FMovieSceneTimeWarpVariant::AsCustom(param_2),
         this_00 == (UMovieSceneTimeWarpGetter *)0x0)) ||
        (bVar7 = UMovieSceneTimeWarpGetter::IsMuted(this_00), !bVar7)))) {
      iVar8 = (this->NestedTransforms).ArrayNum;
      piVar1 = &(this->NestedTransforms).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->NestedTransforms).AllocatorInstance,piVar1);
      }
      (this->NestedTransforms).ArrayNum = iVar8 + 1;
      FVar3 = (param_2->Variant).WeakCustomGetter.WeakPtr;
      pFVar10 = (FMovieSceneNumericVariant *)
                ((this->NestedTransforms).AllocatorInstance.Data + (longlong)iVar8 * 0x20);
      *(undefined8 *)pFVar10->Data = *(undefined8 *)(param_2->Variant).Data;
      (pFVar10->WeakCustomGetter).WeakPtr = FVar3;
      *(FFrameTime *)pFVar10[1].Data = param_1;
      pFVar10[1].WeakCustomGetter.WeakPtr = (FWeakObjectPtr)0x0;
      FMovieSceneNumericVariant::MakeWeakUnsafe(pFVar10);
    }
  }
  else {
    fVar11 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(param_2);
    fVar5 = __real_322bcc77;
    if (((float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FMath::IsNearlyZero(TimeScale)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                           ,0x2c,
                           L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_1.FrameNumber.Value.Value != 0) ||
        (local_48.Offset.SubFrame = param_1.SubFrame,
        fVar5 < (float)((uint)local_48.Offset.SubFrame & __xmm_7fffffff7fffffff7fffffff7fffffff)))
       || (fVar5 < (float)((uint)(fVar11 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff
                          ))) {
      iVar8 = (this->NestedTransforms).ArrayNum;
      local_48.TimeScale = fVar11;
      local_48.Offset = param_1;
      if (iVar8 == 0) {
        pFVar9 = ::operator*(local_38,&local_48,&this->LinearTransform);
        FVar4.Value = (pFVar9->Offset).FrameNumber.Value;
        (this->LinearTransform).TimeScale = pFVar9->TimeScale;
        (this->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar4.Value;
        (this->LinearTransform).Offset.SubFrame = (pFVar9->Offset).SubFrame;
      }
      else {
        if (iVar8 == (this->NestedTransforms).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&(this->NestedTransforms).AllocatorInstance,
                             &(this->NestedTransforms).ArrayMax);
          (this->NestedTransforms).ArrayNum = iVar8;
        }
        pFVar10 = (FMovieSceneNumericVariant *)
                  ((this->NestedTransforms).AllocatorInstance.Data + (longlong)iVar8 * 0x20);
        (this->NestedTransforms).ArrayNum = iVar8 + 1;
        FMovieSceneNumericVariant::FMovieSceneNumericVariant(pFVar10);
        FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)pFVar10,(double)fVar11);
        *(FFrameTime *)pFVar10[1].Data = param_1;
        pFVar10[1].WeakCustomGetter.WeakPtr = (FWeakObjectPtr)0x0;
      }
    }
  }
  return;
}

// Add @ 14618c920

void __thiscall
FMovieSceneSequenceTransform::Add
          (FMovieSceneSequenceTransform *this,FMovieSceneNestedSequenceTransform *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  FFrameNumber FVar5;
  bool bVar6;
  uchar uVar7;
  int iVar8;
  FMovieSceneTimeTransform *pFVar9;
  longlong lVar10;
  FMovieSceneTimeTransform local_24;
  FMovieSceneTimeTransform local_18;
  
  bVar6 = FMovieSceneNestedSequenceTransform::IsIdentity(param_1);
  if (!bVar6) {
    if ((this->NestedTransforms).ArrayNum == 0) {
      if ((*(ulonglong *)(param_1->TimeScale).Variant.Data & 0xfff8000000000000) !=
          0xfff8000000000000) {
LAB_14618c96b:
        local_24.TimeScale = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(&param_1->TimeScale);
        local_24.Offset = param_1->Offset;
        if ((float)((uint)local_24.TimeScale & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            __real_322bcc77) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!FMath::IsNearlyZero(TimeScale)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                             ,0x2c,
                             L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar9 = ::operator*(&local_18,&local_24,&this->LinearTransform);
        FVar5.Value = (pFVar9->Offset).FrameNumber.Value;
        (this->LinearTransform).TimeScale = pFVar9->TimeScale;
        (this->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar5.Value;
        (this->LinearTransform).Offset.SubFrame = (pFVar9->Offset).SubFrame;
        return;
      }
      uVar7 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)param_1);
      if (uVar7 == 0xff) goto LAB_14618c96b;
    }
    iVar8 = (this->NestedTransforms).ArrayNum;
    piVar1 = &(this->NestedTransforms).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->NestedTransforms).AllocatorInstance,piVar1);
    }
    (this->NestedTransforms).ArrayNum = iVar8 + 1;
    pFVar2 = (this->NestedTransforms).AllocatorInstance.Data;
    FVar4 = (param_1->TimeScale).Variant.WeakCustomGetter.WeakPtr;
    lVar10 = (longlong)iVar8 * 0x20;
    *(undefined8 *)(pFVar2 + lVar10) = *(undefined8 *)(param_1->TimeScale).Variant.Data;
    *(FWeakObjectPtr *)(pFVar2 + lVar10 + 8) = FVar4;
    *(FFrameTime *)(pFVar2 + lVar10 + 0x10) = param_1->Offset;
    *(FMovieSceneTimeWarping *)(pFVar2 + lVar10 + 0x18) = param_1->Warping;
  }
  return;
}

// Add @ 14618ca40

void __thiscall
FMovieSceneSequenceTransform::Add
          (FMovieSceneSequenceTransform *this,FMovieSceneTimeTransform *param_1)

{
  FFrameNumber FVar1;
  int iVar2;
  FMovieSceneTimeTransform *pFVar3;
  FMovieSceneNumericVariant *this_00;
  FMovieSceneTimeTransform local_18;
  
  if ((((param_1->Offset).FrameNumber.Value == 0) &&
      ((float)((uint)(param_1->Offset).SubFrame & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)) &&
     ((float)((uint)(param_1->TimeScale - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)
      <= __real_322bcc77)) {
    return;
  }
  iVar2 = (this->NestedTransforms).ArrayNum;
  if (iVar2 != 0) {
    if (iVar2 == (this->NestedTransforms).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->NestedTransforms).AllocatorInstance,
                         &(this->NestedTransforms).ArrayMax);
      (this->NestedTransforms).ArrayNum = iVar2;
    }
    this_00 = (FMovieSceneNumericVariant *)
              ((this->NestedTransforms).AllocatorInstance.Data + (longlong)iVar2 * 0x20);
    (this->NestedTransforms).ArrayNum = iVar2 + 1;
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(this_00);
    FMovieSceneTimeWarpVariant::Set
              ((FMovieSceneTimeWarpVariant *)this_00,(double)param_1->TimeScale);
    *(FFrameTime *)this_00[1].Data = param_1->Offset;
    this_00[1].WeakCustomGetter.WeakPtr = (FWeakObjectPtr)0x0;
    return;
  }
  pFVar3 = ::operator*(&local_18,param_1,&this->LinearTransform);
  FVar1.Value = (pFVar3->Offset).FrameNumber.Value;
  (this->LinearTransform).TimeScale = pFVar3->TimeScale;
  (this->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar1.Value;
  (this->LinearTransform).Offset.SubFrame = (pFVar3->Offset).SubFrame;
  return;
}

// AddLoop @ 14618dc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSequenceTransform::AddLoop
          (FMovieSceneSequenceTransform *this,FFrameNumber param_1,FFrameNumber param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneNumericVariant *this_00;
  undefined1 auStack_58 [32];
  FMovieSceneTimeWarpLoop local_38 [2];
  uint local_30;
  undefined4 uStack_2c;
  FMovieSceneTimeWarpVariant local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_2.Value <= param_1.Value) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStart < InEnd",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceTransform.cpp"
                       ,0x414,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38[0].Duration.Value = (FFrameNumber)(param_2.Value - param_1.Value);
  local_28.Variant.WeakCustomGetter.WeakPtr.ObjectIndex = 0;
  local_28.Variant.WeakCustomGetter.WeakPtr.ObjectSerialNumber = 0;
  FMovieSceneTimeWarpVariant::Set(&local_28,local_38);
  iVar4 = (this->NestedTransforms).ArrayNum;
  piVar1 = &(this->NestedTransforms).ArrayMax;
  local_30 = -param_1.Value;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->NestedTransforms).AllocatorInstance,piVar1);
  }
  (this->NestedTransforms).ArrayNum = iVar4 + 1;
  this_00 = (FMovieSceneNumericVariant *)
            ((this->NestedTransforms).AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  uStack_2c = 0;
  *&this_00->Data = local_28.Variant.Data;
  (this_00->WeakCustomGetter).WeakPtr = local_28.Variant.WeakCustomGetter.WeakPtr;
  *(ulonglong *)this_00[1].Data = (ulonglong)local_30;
  this_00[1].WeakCustomGetter.WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneNumericVariant::MakeWeakUnsafe(this_00);
  return;
}

// Append @ 146192990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSequenceTransform::Append
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *param_1)

{
  int *piVar1;
  float fVar2;
  FMovieSceneNumericVariant *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FFrameNumber FVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneTimeTransform *pFVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  FMovieSceneNumericVariant *local_88;
  FMovieSceneNumericVariant *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  FMovieSceneTimeTransform local_58;
  FMovieSceneNumericVariant local_48;
  FFrameTime local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar8 = (param_1->LinearTransform).Offset.FrameNumber.Value;
  if ((this->NestedTransforms).ArrayNum == 0) {
    if (iVar8 == 0) {
      if (((float)((uint)(param_1->LinearTransform).Offset.SubFrame &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
         ((float)((uint)((param_1->LinearTransform).TimeScale - __real_3f800000) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) goto LAB_146192b4e;
    }
    pFVar9 = ::operator*(&local_58,&param_1->LinearTransform,&this->LinearTransform);
    FVar6.Value = (pFVar9->Offset).FrameNumber.Value;
    (this->LinearTransform).TimeScale = pFVar9->TimeScale;
    (this->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar6.Value;
    (this->LinearTransform).Offset.SubFrame = (pFVar9->Offset).SubFrame;
  }
  else {
    if (iVar8 == 0) {
      if (((float)((uint)(param_1->LinearTransform).Offset.SubFrame &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
         ((float)((uint)((param_1->LinearTransform).TimeScale - __real_3f800000) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) goto LAB_146192b4e;
    }
    fVar2 = (param_1->LinearTransform).TimeScale;
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_48);
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_48,(double)fVar2);
    local_38 = (param_1->LinearTransform).Offset;
    pFVar3 = (FMovieSceneNumericVariant *)(this->NestedTransforms).AllocatorInstance.Data;
    local_30 = 0;
    if ((pFVar3 <= &local_48) &&
       (lVar10 = (longlong)(this->NestedTransforms).ArrayMax, &local_48 < pFVar3 + lVar10 * 2)) {
      local_70 = (longlong)(this->NestedTransforms).ArrayNum;
      local_68 = 0x20;
      local_88 = &local_48;
      local_80 = pFVar3;
      local_78 = lVar10;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->NestedTransforms).ArrayNum;
    piVar1 = &(this->NestedTransforms).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->NestedTransforms).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->NestedTransforms).AllocatorInstance.Data;
    lVar10 = (longlong)iVar8 * 0x20;
    (this->NestedTransforms).ArrayNum = iVar8 + 1;
    *(uchar (*) [8])(pFVar4 + lVar10) = local_48.Data;
    *(FWeakObjectPtr *)(pFVar4 + lVar10 + 8) = local_48.WeakCustomGetter.WeakPtr;
    *(FFrameTime *)(pFVar4 + lVar10 + 0x10) = local_38;
    *(undefined8 *)(pFVar4 + lVar10 + 0x18) = local_30;
  }
LAB_146192b4e:
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::
  Append<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>
            (&this->NestedTransforms,&param_1->NestedTransforms);
  return;
}

// ComputeTraversedHull @ 146198420

TRange<FFrameTime> * __thiscall
FMovieSceneSequenceTransform::ComputeTraversedHull
          (FMovieSceneSequenceTransform *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  int iVar1;
  FFrameTime FVar2;
  undefined8 uVar3;
  undefined3 uVar4;
  FFrameNumber FVar5;
  TRange<FFrameTime> *pTVar6;
  FFrameTime *pFVar7;
  FMovieSceneNestedSequenceTransform *this_00;
  FMovieSceneNestedSequenceTransform *pFVar8;
  FFrameTime local_res8;
  float fStackX_24;
  TRange<FFrameTime> local_48;
  
  operator*<FFrameTime>(__return_storage_ptr__,param_1,&this->LinearTransform);
  UE::MovieScene::CorrectInsideOutRange(__return_storage_ptr__);
  iVar1 = (this->NestedTransforms).ArrayNum;
  this_00 = (FMovieSceneNestedSequenceTransform *)(this->NestedTransforms).AllocatorInstance.Data;
  pFVar8 = this_00 + iVar1;
  do {
    if ((this->NestedTransforms).ArrayNum != iVar1) {
      local_res8 = (FFrameTime)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (this_00 == pFVar8) {
      return __return_storage_ptr__;
    }
    pTVar6 = FMovieSceneNestedSequenceTransform::ComputeTraversedHull
                       (this_00,&local_48,__return_storage_ptr__);
    uVar4 = *(undefined3 *)&(pTVar6->LowerBound).field_0x1;
    FVar5.Value = (pTVar6->LowerBound).Value.FrameNumber.Value;
    uVar3 = *(undefined8 *)&(pTVar6->LowerBound).Value.SubFrame;
    (__return_storage_ptr__->LowerBound).Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar6->LowerBound).Type.Value;
    *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar4;
    (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)FVar5.Value;
    *(undefined8 *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = uVar3;
    (__return_storage_ptr__->UpperBound).Value = (pTVar6->UpperBound).Value;
    if (((__return_storage_ptr__->LowerBound).Type.Value != '\x02') &&
       ((__return_storage_ptr__->UpperBound).Type.Value != '\x02')) {
      FVar2 = (__return_storage_ptr__->UpperBound).Value;
      local_res8 = (__return_storage_ptr__->LowerBound).Value;
      FVar5 = FVar2.FrameNumber.Value;
      if (FVar5.Value < local_res8.FrameNumber.Value.Value) {
        return __return_storage_ptr__;
      }
      if (local_res8.FrameNumber.Value.Value == FVar5.Value) {
        fStackX_24 = FVar2.SubFrame;
        if (fStackX_24 < local_res8.SubFrame) {
          return __return_storage_ptr__;
        }
      }
      pFVar7 = TRangeBound<FFrameTime>::GetValue(&__return_storage_ptr__->UpperBound);
      FVar2 = *pFVar7;
      pFVar7 = TRangeBound<FFrameTime>::GetValue(&__return_storage_ptr__->LowerBound);
      local_res8 = *pFVar7;
      if (local_res8.FrameNumber.Value.Value == FVar2.FrameNumber.Value.Value) {
        fStackX_24 = FVar2.SubFrame;
        if (local_res8.SubFrame == fStackX_24) {
          if ((__return_storage_ptr__->LowerBound).Type.Value == '\0') {
            return __return_storage_ptr__;
          }
          if ((__return_storage_ptr__->UpperBound).Type.Value == '\0') {
            return __return_storage_ptr__;
          }
        }
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// ComputeTraversedHull @ 146198560

TRange<FFrameTime> * __thiscall
FMovieSceneSequenceTransform::ComputeTraversedHull
          (FMovieSceneSequenceTransform *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameNumber> *param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  TRange<FFrameTime> *pTVar4;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  TRange<FFrameTime> local_28;
  
  local_28.LowerBound.Type.Value = 2;
  local_28.LowerBound.Value.FrameNumber.Value = 0;
  local_28.LowerBound.Value.SubFrame = 0.0;
  local_28.UpperBound.Type.Value = 2;
  local_28.UpperBound.Value.FrameNumber.Value = 0;
  local_28.UpperBound.Value.SubFrame = 0.0;
  if ((param_1->LowerBound).Type.Value != '\x02') {
    uVar1 = (param_1->LowerBound).Type.Value;
    if (uVar1 == '\x01') {
      local_28.LowerBound.Value.FrameNumber.Value = (param_1->LowerBound).Value.Value;
      local_58 = CONCAT31(local_58._1_3_,1);
      local_28.LowerBound._0_4_ = local_58;
    }
    else {
      if ((uVar1 == '\x02') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TRange<FFrameTime> *)(*pcVar2)();
        return pTVar4;
      }
      local_28.LowerBound.Value.FrameNumber.Value = (param_1->LowerBound).Value.Value;
      local_4c = local_4c & 0xffffff00;
      local_28.LowerBound._0_4_ = local_4c;
    }
  }
  local_28.LowerBound.Value.SubFrame = 0.0;
  if ((param_1->UpperBound).Type.Value != '\x02') {
    local_28.UpperBound.Value.FrameNumber.Value = (param_1->UpperBound).Value.Value;
    if ((param_1->UpperBound).Type.Value == '\x01') {
      local_40 = CONCAT31(local_40._1_3_,1);
      local_28.UpperBound._0_4_ = local_40;
    }
    else {
      local_34 = local_34 & 0xffffff00;
      local_28.UpperBound._0_4_ = local_34;
    }
    local_28.UpperBound.Value.SubFrame = 0.0;
  }
  ComputeTraversedHull(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// ExtractBoundariesWithinRange @ 1461a58d0

bool __thiscall
FMovieSceneSequenceTransform::ExtractBoundariesWithinRange
          (FMovieSceneSequenceTransform *this,FFrameTime param_1,FFrameTime param_2,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_3)

{
  FMovieSceneNestedSequenceTransform *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FFrameNumber FVar5;
  float fVar6;
  bool bVar7;
  undefined1 uVar8;
  uchar uVar9;
  uint uVar10;
  int iVar11;
  FMovieSceneTimeWarpLoopFloat FVar12;
  FMovieSceneTimeWarpLoop FVar13;
  FFrameTime FVar14;
  TRange<FFrameTime> *pTVar15;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FScriptContainerElement *pFVar16;
  ulong64 uVar17;
  uint uVar18;
  int iVar19;
  ulong64 uVar20;
  FMovieSceneNestedSequenceTransform *this_00;
  float fStackX_c;
  TRange<FFrameTime> local_1c8;
  FMovieSceneSequenceTransform local_1b0;
  ForAnyElementType local_190;
  undefined8 local_188;
  undefined1 local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  TRangeBound<FFrameTime> local_140;
  TRangeBound<FFrameTime> local_134;
  TRangeBound<FFrameTime> local_128;
  TRangeBound<FFrameTime> local_11c;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  FMovieSceneNestedSequenceTransform *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  code *local_d8;
  TFunctionRef<bool___cdecl(FFrameTime)> **local_d0;
  code *local_c8;
  FMovieSceneNestedSequenceTransform **local_c0;
  code *local_b8;
  FMovieSceneNestedSequenceTransform **local_b0;
  TFunctionRef<bool___cdecl(FFrameTime)> *local_a8;
  FMovieSceneInverseSequenceTransform *local_a0;
  ForAnyElementType *local_98;
  ForAnyElementType *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  FMovieSceneInverseSequenceTransform local_78;
  TRange<FFrameTime> local_58;
  
  uVar17 = 0;
  local_140.Type.Value = '\x02';
  local_140.Value.FrameNumber.Value = 0;
  local_160 = 0x80000000;
  uStack_15c = 0;
  local_1c8.LowerBound.Type.Value = '\x02';
  local_1c8.LowerBound._1_3_ = local_140._1_3_;
  local_1c8.LowerBound.Value.FrameNumber.Value = 0;
  local_134.Value.FrameNumber.Value = 0;
  local_134.Type.Value = '\x02';
  local_1c8.UpperBound.Type.Value = '\x02';
  local_1c8.UpperBound._1_3_ = local_134._1_3_;
  local_1c8.UpperBound.Value.FrameNumber.Value = 0;
  local_134.Value.SubFrame = 0.0;
  local_140.Value.SubFrame = 0.0;
  local_1c8.LowerBound.Value.SubFrame = 0.0;
  local_1c8.UpperBound.Value.SubFrame = 0.0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_168 = 0;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  local_180 = 0;
  if ((param_1.FrameNumber.Value.Value != -0x80000000) ||
     (fStackX_c = param_1.SubFrame, fStackX_c != 0.0)) {
    FVar14 = ::operator*((FFrameTime)local_88,(FMovieSceneTimeTransform *)param_1);
    local_128.Type.Value = '\x01';
    local_128.Value.FrameNumber.Value = (int)*(undefined8 *)FVar14;
    local_128.Value.SubFrame = (float)((ulonglong)*(undefined8 *)FVar14 >> 0x20);
    local_1c8.LowerBound.Type.Value = '\x01';
    local_1c8.LowerBound._1_3_ = local_128._1_3_;
    local_1c8.LowerBound.Value.FrameNumber.Value = local_128.Value.FrameNumber.Value;
    local_1c8.LowerBound.Value.SubFrame = local_128.Value.SubFrame;
  }
  local_158 = 0x7fffffff;
  if ((param_2.FrameNumber.Value.Value != 0x7fffffff) ||
     (fStackX_c = param_2.SubFrame, fStackX_c != 0.0)) {
    FVar14 = ::operator*((FFrameTime)local_80,(FMovieSceneTimeTransform *)param_2);
    local_11c.Type.Value = '\x01';
    local_11c.Value.FrameNumber.Value = (int)*(undefined8 *)FVar14;
    local_11c.Value.SubFrame = (float)((ulonglong)*(undefined8 *)FVar14 >> 0x20);
    local_1c8.UpperBound.Type.Value = '\x01';
    local_1c8.UpperBound._1_3_ = local_11c._1_3_;
    local_1c8.UpperBound.Value.FrameNumber.Value = local_11c.Value.FrameNumber.Value;
    local_1c8.UpperBound.Value.SubFrame = local_11c.Value.SubFrame;
  }
  fVar6 = local_1c8.LowerBound.Value.SubFrame;
  FVar5.Value = local_1c8.LowerBound.Value.FrameNumber.Value;
  if ((local_1c8.UpperBound.Type.Value != '\x02') && (local_1c8.LowerBound.Type.Value != '\x02')) {
    if ((local_1c8.UpperBound.Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    local_110 = CONCAT44(local_1c8.UpperBound.Value.SubFrame,
                         local_1c8.UpperBound.Value.FrameNumber.Value);
    if ((local_1c8.UpperBound.Value.FrameNumber.Value < FVar5.Value) ||
       ((FVar5.Value == local_1c8.UpperBound.Value.FrameNumber.Value &&
        (local_1c8.UpperBound.Value.SubFrame < fVar6)))) {
      if ((local_1c8.UpperBound.Type.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      if ((local_1c8.LowerBound.Type.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,0x73,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      local_1c8.LowerBound.Value.FrameNumber.Value = local_1c8.UpperBound.Value.FrameNumber.Value;
      local_1c8.LowerBound.Value.SubFrame = local_1c8.UpperBound.Value.SubFrame;
      if ((local_1c8.UpperBound.Type.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,0x73,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      local_1c8.UpperBound.Value.FrameNumber.Value = FVar5.Value;
      local_1c8.UpperBound.Value.SubFrame = fVar6;
    }
  }
  uVar20 = uVar17;
  if (0 < (this->NestedTransforms).ArrayNum) {
    do {
      uVar18 = (uint)uVar20;
      uVar10 = 0;
      if ((int)uVar18 < (this->NestedTransforms).ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      this_00 = (FMovieSceneNestedSequenceTransform *)
                ((this->NestedTransforms).AllocatorInstance.Data + uVar17);
      if (((*(ulonglong *)(this_00->TimeScale).Variant.Data & 0xfff8000000000000) ==
           0xfff8000000000000) &&
         (uVar9 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_00),
         (uVar9 - 3 & 0xfd) == 0)) {
        local_1b0.LinearTransform.Offset.SubFrame = (this->LinearTransform).Offset.SubFrame;
        iVar11 = (this->NestedTransforms).ArrayNum;
        local_1b0.LinearTransform.TimeScale = (this->LinearTransform).TimeScale;
        local_1b0.LinearTransform.Offset.FrameNumber.Value =
             (this->LinearTransform).Offset.FrameNumber.Value;
        pFVar1 = (FMovieSceneNestedSequenceTransform *)
                 (this->NestedTransforms).AllocatorInstance.Data;
        local_1b0.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.NestedTransforms.ArrayNum = iVar11;
        if (iVar11 == 0) {
          local_1b0.NestedTransforms.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar11,0,&local_1b0.NestedTransforms.AllocatorInstance,iVar11,
                     &local_1b0.NestedTransforms.ArrayMax);
          ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                    (local_1b0.NestedTransforms.AllocatorInstance.Data,pFVar1,iVar11);
        }
        if (local_1b0.NestedTransforms.ArrayNum < (int)uVar18) {
          iVar19 = uVar18 - local_1b0.NestedTransforms.ArrayNum;
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x20,8,iVar19,&local_1b0.NestedTransforms.AllocatorInstance,
                              &local_1b0.NestedTransforms.ArrayNum,
                              &local_1b0.NestedTransforms.ArrayMax);
          DefaultConstructItems<FMovieSceneNestedSequenceTransform,int>
                    (local_1b0.NestedTransforms.AllocatorInstance.Data + (longlong)iVar11 * 0x20,
                     iVar19);
        }
        else {
          if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar20);
          }
          if ((int)uVar18 < local_1b0.NestedTransforms.ArrayNum) {
            iVar11 = local_1b0.NestedTransforms.ArrayNum - uVar18;
            if ((-1 < (char)((byte)(~uVar18 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            if (iVar11 != 0) {
              iVar19 = (local_1b0.NestedTransforms.ArrayNum - iVar11) - uVar18;
              if (iVar19 != 0) {
                memmove(local_1b0.NestedTransforms.AllocatorInstance.Data +
                        (longlong)(int)uVar18 * 0x20,
                        local_1b0.NestedTransforms.AllocatorInstance.Data +
                        (longlong)(int)uVar18 * 0x20 + (longlong)iVar11 * 0x20,(longlong)iVar19 << 5
                       );
              }
              local_1b0.NestedTransforms.ArrayNum = local_1b0.NestedTransforms.ArrayNum - iVar11;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,&local_1b0.NestedTransforms.AllocatorInstance,
                         local_1b0.NestedTransforms.ArrayNum,&local_1b0.NestedTransforms.ArrayMax);
            }
          }
        }
        Inverse(&local_1b0,&local_78);
        local_a0 = &local_78;
        local_98 = &local_178;
        local_90 = &local_190;
        local_a8 = param_3;
        if ((*(ulonglong *)(this_00->TimeScale).Variant.Data & 0xfff8000000000000) ==
            0xfff8000000000000) {
          uVar9 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_00);
          local_f0 = CONCAT44(local_1c8.LowerBound.Value.FrameNumber.Value,
                              local_1c8.LowerBound._0_4_);
          uStack_e8 = CONCAT44(local_1c8.UpperBound._0_4_,local_1c8.LowerBound.Value.SubFrame);
          local_e0 = CONCAT44(local_1c8.UpperBound.Value.SubFrame,
                              local_1c8.UpperBound.Value.FrameNumber.Value);
          local_d8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FMovieSceneSequenceTransform::ExtractBoundariesWithinRange'::__l10::<lambda_1>,bool,FFrameTime>
                     ::Call;
          local_d0 = &local_a8;
          local_f8 = this_00;
          if (uVar9 == '\x03') {
            FVar13 = FMovieSceneTimeWarpVariant::AsLoop((FMovieSceneTimeWarpVariant *)this_00);
            local_b0 = &local_f8;
            local_b8 = UE::Core::Private::Function::
                       TFunctionRefCaller<`FMovieSceneNestedSequenceTransform::ExtractBoundariesWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
                       ::Call;
            bVar7 = FMovieSceneTimeWarpLoop::ExtractBoundariesWithinRange
                              ((FMovieSceneTimeWarpLoop *)
                               CONCAT44(extraout_var_00,FVar13.Duration.Value),&local_1c8,
                               (TFunctionRef<bool___cdecl(FFrameTime)> *)&local_b8);
          }
          else {
            if (uVar9 != '\x05') goto LAB_1461a5f83;
            FVar12 = FMovieSceneTimeWarpVariant::AsLoopFloat((FMovieSceneTimeWarpVariant *)this_00);
            local_c0 = &local_f8;
            local_c8 = UE::Core::Private::Function::
                       TFunctionRefCaller<`FMovieSceneNestedSequenceTransform::ExtractBoundariesWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
                       ::Call;
            bVar7 = FMovieSceneTimeWarpLoopFloat::ExtractBoundariesWithinRange
                              ((FMovieSceneTimeWarpLoopFloat *)
                               CONCAT44(extraout_var,FVar12.Duration),&local_1c8,
                               (TFunctionRef<bool___cdecl(FFrameTime)> *)&local_c8);
          }
        }
        else {
LAB_1461a5f83:
          bVar7 = false;
        }
        if (local_78.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.NestedTransforms.AllocatorInstance.Data);
        }
        if (local_1b0.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.NestedTransforms.AllocatorInstance.Data);
        }
        goto LAB_1461a6016;
      }
      if (((*(ulonglong *)(this_00->TimeScale).Variant.Data & 0xfff8000000000000) ==
           0xfff8000000000000) &&
         (uVar9 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_00),
         uVar9 != 0xff)) {
        if (local_1c8.LowerBound.Type.Value == '\x02') {
          local_150 = 0x80000000;
          pFVar16 = (FScriptContainerElement *)&local_150;
          local_14c = 0;
        }
        else {
          pFVar16 = (FScriptContainerElement *)&local_108;
          local_108 = CONCAT44(local_1c8.LowerBound.Value.SubFrame,
                               local_1c8.LowerBound.Value.FrameNumber.Value);
        }
        if (((local_178.Data <= pFVar16) &&
            (pFVar16 < local_178.Data + (longlong)local_170._4_4_ * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        iVar11 = (int)local_170;
        if ((int)local_170 == local_170._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_178,(int *)((longlong)&local_170 + 4));
        }
        local_170 = CONCAT44(local_170._4_4_,iVar11 + 1);
        *(undefined8 *)(local_178.Data + (longlong)iVar11 * 8) = *(undefined8 *)pFVar16;
        if (local_1c8.UpperBound.Type.Value == '\x02') {
          local_148 = 0x7fffffff;
          pFVar16 = (FScriptContainerElement *)&local_148;
        }
        else {
          pFVar16 = (FScriptContainerElement *)&local_100;
          local_100 = CONCAT44(local_1c8.UpperBound.Value.SubFrame,
                               local_1c8.UpperBound.Value.FrameNumber.Value);
        }
        if (((local_190.Data <= pFVar16) &&
            (pFVar16 < local_190.Data + (longlong)local_188._4_4_ * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        iVar11 = (int)local_188;
        if ((int)local_188 == local_188._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_190,(int *)((longlong)&local_188 + 4));
        }
        local_188 = CONCAT44(local_188._4_4_,iVar11 + 1);
        *(undefined8 *)(local_190.Data + (longlong)iVar11 * 8) = *(undefined8 *)pFVar16;
      }
      pTVar15 = FMovieSceneNestedSequenceTransform::ComputeTraversedHull
                          (this_00,&local_58,&local_1c8);
      uVar20 = (ulong64)(uVar18 + 1);
      uVar17 = uVar17 + 0x20;
      uVar3._0_1_ = (pTVar15->LowerBound).Type;
      uVar3._1_3_ = *(undefined3 *)&(pTVar15->LowerBound).field_0x1;
      uVar3._4_4_ = (pTVar15->LowerBound).Value.FrameNumber;
      uVar4 = *(undefined8 *)&(pTVar15->LowerBound).Value.SubFrame;
      local_1c8.LowerBound._0_4_ = SUB84(uVar3,0);
      local_1c8.LowerBound.Value.SubFrame = (float)uVar4;
      local_1c8.UpperBound._0_4_ = SUB84((ulonglong)uVar4 >> 0x20,0);
      FVar14 = (pTVar15->UpperBound).Value;
      local_1c8.UpperBound.Value.FrameNumber = FVar14.FrameNumber.Value;
      local_1c8.UpperBound.Value.SubFrame = FVar14.SubFrame;
      local_1c8.LowerBound.Value.FrameNumber.Value = uVar3._4_4_;
    } while ((int)(uVar18 + 1) < (this->NestedTransforms).ArrayNum);
  }
  bVar7 = false;
LAB_1461a6016:
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return bVar7;
}

// FindFirstWarpDomain @ 1461a84c0

TOptional<UE::MovieScene::ETimeWarpChannelDomain> __thiscall
FMovieSceneSequenceTransform::FindFirstWarpDomain(FMovieSceneSequenceTransform *this)

{
  int iVar1;
  uchar uVar2;
  undefined1 uVar3;
  UMovieSceneTimeWarpGetter *pUVar4;
  undefined1 *in_RDX;
  FMovieSceneNumericVariant *this_00;
  FMovieSceneNumericVariant *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->NestedTransforms).ArrayNum;
  this_00 = (FMovieSceneNumericVariant *)(this->NestedTransforms).AllocatorInstance.Data;
  pFVar5 = this_00 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->NestedTransforms).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar5) break;
    if ((*(ulonglong *)this_00->Data & 0xfff8000000000000) == 0xfff8000000000000) {
      uVar2 = FMovieSceneNumericVariant::GetTypeBits(this_00);
      if (uVar2 == '\0') {
        pUVar4 = FMovieSceneTimeWarpVariant::AsCustom((FMovieSceneTimeWarpVariant *)this_00);
        if (pUVar4 != (UMovieSceneTimeWarpGetter *)0x0) {
          uVar3 = (**(code **)(pUVar4->_padding_ + 0x2e0))(pUVar4);
          in_RDX[1] = 1;
          *in_RDX = uVar3;
LAB_1461a8557:
          return SUB82(in_RDX,0);
        }
      }
    }
    this_00 = this_00 + 2;
  }
  in_RDX[1] = 0;
  goto LAB_1461a8557;
}

// GetTimeScale @ 1461b4560

float __thiscall FMovieSceneSequenceTransform::GetTimeScale(FMovieSceneSequenceTransform *this)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  uchar uVar5;
  bool bVar6;
  FMovieSceneNumericVariant *this_00;
  FMovieSceneNumericVariant *pFVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [16];
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_322bcc77;
  iVar1 = (this->NestedTransforms).ArrayNum;
  this_00 = (FMovieSceneNumericVariant *)(this->NestedTransforms).AllocatorInstance.Data;
  fVar9 = (this->LinearTransform).TimeScale;
  pFVar7 = this_00 + (longlong)iVar1 * 2;
  do {
    if ((this->NestedTransforms).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar7) {
      return fVar9;
    }
    if ((*(ulonglong *)this_00->Data & 0xfff8000000000000) == 0xfff8000000000000) {
      uVar5 = FMovieSceneNumericVariant::GetTypeBits(this_00);
      if (uVar5 == 0xff) goto LAB_1461b45f6;
    }
    else {
LAB_1461b45f6:
      fVar8 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat
                        ((FMovieSceneTimeWarpVariant *)this_00);
      if ((float)((uint)fVar8 & uVar4) <= fVar3) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FMath::IsNearlyZero(TimeScale)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                           ,0x2c,
                           L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                          );
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          fVar9 = (float)(*pcVar2)();
          return fVar9;
        }
      }
      fVar9 = fVar9 * fVar8;
    }
    this_00 = this_00 + 2;
  } while( true );
}

// Inverse @ 1461bae30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneInverseSequenceTransform * __thiscall
FMovieSceneSequenceTransform::Inverse
          (FMovieSceneSequenceTransform *this,
          FMovieSceneInverseSequenceTransform *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FMovieSceneInverseNestedSequenceTransform *pFVar5;
  FFrameTime FVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  FWeakObjectPtr FVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  bool bVar18;
  uchar uVar19;
  int iVar20;
  FFrameNumber FVar21;
  FMovieSceneTimeTransform *pFVar22;
  FMovieSceneInverseSequenceTransform *pFVar23;
  FMovieSceneInverseNestedSequenceTransform *pFVar24;
  uint uVar25;
  FMovieSceneNumericVariant *pFVar26;
  uint uVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auStackY_1d8 [32];
  float fStack_15c;
  float fStack_13c;
  FMovieSceneTimeTransform local_138;
  FMovieSceneTimeTransform local_12c;
  FMovieSceneTimeTransform local_120;
  FMovieSceneNumericVariant local_110;
  FFrameTime local_100;
  FMovieSceneInverseNestedSequenceTransform local_f8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  piVar1 = &(__return_storage_ptr__->NestedTransforms).ArrayMax;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = (this->NestedTransforms).ArrayNum;
  if (uVar3 == 0) {
    pFVar22 = FMovieSceneTimeTransform::Inverse(&this->LinearTransform,&local_138);
    FVar21.Value = (pFVar22->Offset).FrameNumber.Value;
    (__return_storage_ptr__->LinearTransform).TimeScale = pFVar22->TimeScale;
    (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar21.Value;
    (__return_storage_ptr__->LinearTransform).Offset.SubFrame = (pFVar22->Offset).SubFrame;
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar3,&(__return_storage_ptr__->NestedTransforms).AllocatorInstance,0,piVar1
                );
    }
    fVar17 = __real_7f800000;
    dVar16 = __real_c1e0000000000000;
    dVar15 = __real_41dfffffffc00000;
    fVar14 = __real_3f000000;
    uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar13 = __real_3f800000;
    fVar12 = __real_322bcc77;
    uVar27 = (this->NestedTransforms).ArrayNum - 1;
    if (-1 < (int)uVar27) {
      lVar28 = (longlong)(int)uVar27 << 5;
      do {
        uVar25 = 0;
        if ((int)uVar27 < (this->NestedTransforms).ArrayNum) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          pFVar23 = (FMovieSceneInverseSequenceTransform *)(*pcVar7)();
          return pFVar23;
        }
        pFVar26 = (FMovieSceneNumericVariant *)
                  ((this->NestedTransforms).AllocatorInstance.Data + lVar28);
        if (((*(ulonglong *)pFVar26->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
           (uVar19 = FMovieSceneNumericVariant::GetTypeBits(pFVar26), uVar19 != 0xff)) {
          if ((((__return_storage_ptr__->LinearTransform).Offset.FrameNumber.Value != 0) ||
              (fVar12 < (float)((uint)(__return_storage_ptr__->LinearTransform).Offset.SubFrame &
                               uVar3))) ||
             (fVar12 < (float)((uint)((__return_storage_ptr__->LinearTransform).TimeScale - fVar13)
                              & uVar3))) {
            fVar29 = (__return_storage_ptr__->LinearTransform).TimeScale;
            FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_110);
            FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_110,(double)fVar29)
            ;
            local_100 = (__return_storage_ptr__->LinearTransform).Offset;
            pFVar26 = (FMovieSceneNumericVariant *)
                      (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data;
            if (((pFVar26 <= &local_110) &&
                (&local_110 <
                 (FMovieSceneNumericVariant *)
                 ((longlong)pFVar26 +
                 (longlong)(__return_storage_ptr__->NestedTransforms).ArrayMax * 0x18))) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar7 = (code *)swi(3);
              pFVar23 = (FMovieSceneInverseSequenceTransform *)(*pcVar7)();
              return pFVar23;
            }
            iVar20 = (__return_storage_ptr__->NestedTransforms).ArrayNum;
            if (iVar20 == (__return_storage_ptr__->NestedTransforms).ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&(__return_storage_ptr__->NestedTransforms).
                                         AllocatorInstance,
                                  &(__return_storage_ptr__->NestedTransforms).ArrayMax);
            }
            (__return_storage_ptr__->NestedTransforms).ArrayNum = iVar20 + 1;
            pFVar4 = (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data;
            pFVar2 = pFVar4 + (longlong)iVar20 * 0x18;
            *(uchar (*) [8])pFVar2 = local_110.Data;
            *(FWeakObjectPtr *)(pFVar2 + 8) = local_110.WeakCustomGetter.WeakPtr;
            *(FFrameTime *)(pFVar4 + (longlong)iVar20 * 0x18 + 0x10) = local_100;
            (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
            (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
            (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
          }
          uVar25 = 0;
          if ((int)uVar27 < (this->NestedTransforms).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FMovieSceneInverseSequenceTransform *)(*pcVar7)();
            return pFVar23;
          }
          pFVar24 = FMovieSceneNestedSequenceTransform::Inverse
                              ((FMovieSceneNestedSequenceTransform *)
                               ((this->NestedTransforms).AllocatorInstance.Data + lVar28),&local_f8)
          ;
          pFVar5 = (FMovieSceneInverseNestedSequenceTransform *)
                   (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data;
          if (((pFVar5 <= pFVar24) &&
              (pFVar24 < pFVar5 + (__return_storage_ptr__->NestedTransforms).ArrayMax)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FMovieSceneInverseSequenceTransform *)(*pcVar7)();
            return pFVar23;
          }
          iVar20 = (__return_storage_ptr__->NestedTransforms).ArrayNum;
          if (iVar20 == (__return_storage_ptr__->NestedTransforms).ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(__return_storage_ptr__->NestedTransforms).AllocatorInstance,
                                &(__return_storage_ptr__->NestedTransforms).ArrayMax);
          }
          (__return_storage_ptr__->NestedTransforms).ArrayNum = iVar20 + 1;
          FVar11 = (pFVar24->TimeScale).Variant.WeakCustomGetter.WeakPtr;
          pFVar4 = (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data;
          pFVar2 = pFVar4 + (longlong)iVar20 * 0x18;
          *(undefined8 *)pFVar2 = *(undefined8 *)(pFVar24->TimeScale).Variant.Data;
          *(FWeakObjectPtr *)(pFVar2 + 8) = FVar11;
          *(FFrameTime *)(pFVar4 + (longlong)iVar20 * 0x18 + 0x10) = pFVar24->Offset;
        }
        else {
          fVar29 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat
                             ((FMovieSceneTimeWarpVariant *)pFVar26);
          uVar25 = (uint)*(undefined8 *)pFVar26[1].Data;
          fStack_15c = (float)((ulonglong)*(undefined8 *)pFVar26[1].Data >> 0x20);
          if (fVar12 < (float)((uint)fVar29 & uVar3)) {
LAB_1461bb2e5:
            if (fStack_15c == 0.0) {
              uVar25 = -uVar25;
              fVar30 = 0.0;
            }
            else {
              uVar25 = ~uVar25;
              fVar30 = fVar13 - fStack_15c;
              if (::FFrameTime::MaxSubframe <= fVar13 - fStack_15c) {
                fVar30 = ::FFrameTime::MaxSubframe;
              }
              if (fVar30 <= 0.0) {
                fVar30 = 0.0;
              }
            }
            dVar39 = ((double)fVar30 + (double)(int)uVar25) / (double)fVar29;
            auVar38._8_8_ = 0;
            auVar38._0_8_ = dVar39;
            in_XMM2 = roundpd(in_XMM2,auVar38,1);
            dVar31 = in_XMM2._0_8_;
            dVar32 = dVar31;
            if (dVar15 <= dVar31) {
              dVar32 = dVar15;
            }
            if (dVar32 <= dVar16) {
              dVar32 = dVar16;
            }
            uVar25 = (uint)dVar32;
            fVar30 = (float)(dVar39 - dVar31);
            if (::FFrameTime::MaxSubframe <= fVar30) {
              fVar30 = ::FFrameTime::MaxSubframe;
            }
            auVar33 = ZEXT416((uint)fVar30);
            if (fVar30 <= 0.0) {
              auVar33 = ZEXT816(0) << 0x20;
            }
            if (::FFrameTime::MaxSubframe <= auVar33._0_4_) {
              auVar33._0_4_ = ::FFrameTime::MaxSubframe;
            }
            if (auVar33._0_4_ <= 0.0) {
              auVar8._12_4_ = 0;
              auVar8._0_12_ = auVar33._4_12_;
              auVar33 = auVar8 << 0x20;
            }
            fVar30 = auVar33._0_4_;
            fVar29 = fVar13 / fVar29;
          }
          else {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("!FMath::IsNearlyZero(TimeScale)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                                ,0x2c,
                                L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                               );
            if (bVar18) {
              pcVar7 = (code *)swi(3);
              pFVar23 = (FMovieSceneInverseSequenceTransform *)(*pcVar7)();
              return pFVar23;
            }
            if (fVar12 < (float)((uint)fVar29 & uVar3)) goto LAB_1461bb2e5;
            fVar29 = fVar17;
            if (fStack_15c == 0.0) {
              uVar25 = -uVar25;
              fVar30 = 0.0;
            }
            else {
              uVar25 = ~uVar25;
              fVar30 = fVar13 - fStack_15c;
              if (::FFrameTime::MaxSubframe <= fVar13 - fStack_15c) {
                fVar30 = ::FFrameTime::MaxSubframe;
              }
              if (fVar30 <= 0.0) {
                fVar30 = 0.0;
              }
            }
          }
          if (((float)((uint)fVar29 & uVar3) <= fVar12) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!FMath::IsNearlyZero(TimeScale)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                                  ,0x2c,
                                  L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                                 ), bVar18)) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FMovieSceneInverseSequenceTransform *)(*pcVar7)();
            return pFVar23;
          }
          fVar36 = (__return_storage_ptr__->LinearTransform).TimeScale;
          if ((fVar36 != fVar13) && (iVar20 = _finite((double)fVar36), iVar20 != 0)) {
            dVar39 = ((double)(int)uVar25 + (double)fVar30) *
                     (double)(__return_storage_ptr__->LinearTransform).TimeScale;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = dVar39;
            auVar38 = roundpd(in_XMM2,auVar34,1);
            dVar31 = auVar38._0_8_;
            dVar32 = dVar31;
            if (dVar15 <= dVar31) {
              dVar32 = dVar15;
            }
            if (dVar32 <= dVar16) {
              dVar32 = dVar16;
            }
            uVar25 = (uint)dVar32;
            fVar30 = (float)(dVar39 - dVar31);
            if (::FFrameTime::MaxSubframe <= fVar30) {
              fVar30 = ::FFrameTime::MaxSubframe;
            }
            auVar35 = ZEXT416((uint)fVar30);
            if (fVar30 <= 0.0) {
              auVar35 = ZEXT816(0) << 0x20;
            }
            if (::FFrameTime::MaxSubframe <= auVar35._0_4_) {
              auVar35._0_4_ = ::FFrameTime::MaxSubframe;
            }
            if (auVar35._0_4_ <= 0.0) {
              auVar9._12_4_ = 0;
              auVar9._0_12_ = auVar35._4_12_;
              auVar35 = auVar9 << 0x20;
            }
            fVar30 = auVar35._0_4_;
          }
          FVar6 = (__return_storage_ptr__->LinearTransform).Offset;
          fVar29 = fVar29 * (__return_storage_ptr__->LinearTransform).TimeScale;
          fStack_13c = FVar6.SubFrame;
          fVar30 = fVar30 + fStack_13c;
          FVar21.Value = ((int)ROUND((fVar30 + fVar30) - fVar14) >> 1) +
                         FVar6.FrameNumber.Value.Value + uVar25;
          iVar20 = (int)fVar30;
          fVar36 = fVar30;
          if ((iVar20 != -0x80000000) && ((float)iVar20 != fVar30)) {
            auVar37._4_4_ = fVar30;
            auVar37._0_4_ = fVar30;
            auVar37._8_8_ = 0;
            uVar25 = movmskps(FVar21.Value,auVar37);
            fVar36 = (float)(int)(iVar20 - (uVar25 & 1));
          }
          fVar10 = fVar30 - fVar36;
          if (::FFrameTime::MaxSubframe <= fVar30 - fVar36) {
            fVar10 = ::FFrameTime::MaxSubframe;
          }
          in_XMM2 = ZEXT416((uint)fVar10);
          if (fVar10 <= 0.0) {
            in_XMM2 = ZEXT816(0) << 0x20;
          }
          fVar30 = in_XMM2._0_4_;
          if (((float)((uint)fVar29 & uVar3) <= fVar12) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!FMath::IsNearlyZero(TimeScale)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                                  ,0x2c,
                                  L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                                 ), bVar18)) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FMovieSceneInverseSequenceTransform *)(*pcVar7)();
            return pFVar23;
          }
          FVar6.SubFrame = fVar30;
          FVar6.FrameNumber.Value = FVar21.Value;
          (__return_storage_ptr__->LinearTransform).TimeScale = fVar29;
          (__return_storage_ptr__->LinearTransform).Offset = FVar6;
        }
        lVar28 = lVar28 + -0x20;
        uVar27 = uVar27 - 1;
      } while (-1 < (int)uVar27);
    }
    if ((((this->LinearTransform).Offset.FrameNumber.Value != 0) ||
        (fVar12 < (float)((uint)(this->LinearTransform).Offset.SubFrame & uVar3))) ||
       (fVar12 < (float)((uint)((this->LinearTransform).TimeScale - fVar13) & uVar3))) {
      pFVar22 = FMovieSceneTimeTransform::Inverse(&this->LinearTransform,&local_12c);
      pFVar22 = ::operator*(&local_120,pFVar22,&__return_storage_ptr__->LinearTransform);
      FVar21.Value = (pFVar22->Offset).FrameNumber.Value;
      (__return_storage_ptr__->LinearTransform).TimeScale = pFVar22->TimeScale;
      (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = (FFrameNumber)FVar21.Value;
      (__return_storage_ptr__->LinearTransform).Offset.SubFrame = (pFVar22->Offset).SubFrame;
    }
  }
  return __return_storage_ptr__;
}

// InverseFromAllFirstLoops @ 1461bb7b0

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::InverseFromAllFirstLoops
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *__return_storage_ptr__)

{
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  return __return_storage_ptr__;
}

// InverseFromAllFirstWarps @ 1461bb7d0

FMovieSceneTimeTransform * __thiscall
FMovieSceneSequenceTransform::InverseFromAllFirstWarps
          (FMovieSceneSequenceTransform *this,FMovieSceneTimeTransform *__return_storage_ptr__)

{
  __return_storage_ptr__->TimeScale = 1.0;
  (__return_storage_ptr__->Offset).FrameNumber = 0;
  (__return_storage_ptr__->Offset).SubFrame = 0.0;
  return __return_storage_ptr__;
}

// InverseFromLoop @ 1461bb7f0

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::InverseFromLoop
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *__return_storage_ptr__,
          FMovieSceneWarpCounter *param_1)

{
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  return __return_storage_ptr__;
}

// InverseFromLoop @ 1461bb810

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::InverseFromLoop
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *__return_storage_ptr__,
          TArrayView<unsigned_int_const_,int> *param_1)

{
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  return __return_storage_ptr__;
}

// InverseFromLoop @ 1461bb830

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::InverseFromLoop
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *__return_storage_ptr__,
          TArrayView<FFrameTime_const_,int> *param_1)

{
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  return __return_storage_ptr__;
}

// InverseFromWarp @ 1461bb850

FMovieSceneTimeTransform * __thiscall
FMovieSceneSequenceTransform::InverseFromWarp
          (FMovieSceneSequenceTransform *this,FMovieSceneTimeTransform *__return_storage_ptr__,
          FMovieSceneWarpCounter *param_1)

{
  __return_storage_ptr__->TimeScale = 1.0;
  (__return_storage_ptr__->Offset).FrameNumber = 0;
  (__return_storage_ptr__->Offset).SubFrame = 0.0;
  return __return_storage_ptr__;
}

// InverseFromWarp @ 1461bb870

FMovieSceneTimeTransform * __thiscall
FMovieSceneSequenceTransform::InverseFromWarp
          (FMovieSceneSequenceTransform *this,FMovieSceneTimeTransform *__return_storage_ptr__,
          TArrayView<unsigned_int_const_,int> *param_1)

{
  __return_storage_ptr__->TimeScale = 1.0;
  (__return_storage_ptr__->Offset).FrameNumber = 0;
  (__return_storage_ptr__->Offset).SubFrame = 0.0;
  return __return_storage_ptr__;
}

// InverseLinearOnly @ 1461bb890

FMovieSceneTimeTransform * __thiscall
FMovieSceneSequenceTransform::InverseLinearOnly
          (FMovieSceneSequenceTransform *this,FMovieSceneTimeTransform *__return_storage_ptr__)

{
  undefined1 local_res8 [8];
  
  if ((float)((uint)(this->LinearTransform).TimeScale & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    `FMovieSceneSequenceTransform::InverseLinearOnly'::__l2::<lambda_1>::operator()(local_res8);
  }
  FMovieSceneTimeTransform::Inverse(&this->LinearTransform,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InverseNoLooping @ 1461bb8e0

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSequenceTransform::InverseNoLooping
          (FMovieSceneSequenceTransform *this,FMovieSceneSequenceTransform *__return_storage_ptr__)

{
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsIdentity @ 1461bbcb0

bool __thiscall FMovieSceneSequenceTransform::IsIdentity(FMovieSceneSequenceTransform *this)

{
  int iVar1;
  bool bVar2;
  FMovieSceneNestedSequenceTransform *this_00;
  FMovieSceneNestedSequenceTransform *pFVar3;
  undefined1 local_res8 [8];
  
  if ((((this->LinearTransform).Offset.FrameNumber.Value == 0) &&
      ((float)((uint)(this->LinearTransform).Offset.SubFrame &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
     ((float)((uint)((this->LinearTransform).TimeScale - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    iVar1 = (this->NestedTransforms).ArrayNum;
    this_00 = (FMovieSceneNestedSequenceTransform *)(this->NestedTransforms).AllocatorInstance.Data;
    pFVar3 = this_00 + iVar1;
    while( true ) {
      if ((this->NestedTransforms).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar3) {
        return true;
      }
      bVar2 = FMovieSceneNestedSequenceTransform::IsIdentity(this_00);
      if (!bVar2) break;
      this_00 = this_00 + 1;
    }
  }
  return false;
}

// IsLooping @ 1461bbda0

bool __thiscall FMovieSceneSequenceTransform::IsLooping(FMovieSceneSequenceTransform *this)

{
  int iVar1;
  uchar uVar2;
  FMovieSceneNumericVariant *this_00;
  FMovieSceneNumericVariant *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->NestedTransforms).ArrayNum;
  this_00 = (FMovieSceneNumericVariant *)(this->NestedTransforms).AllocatorInstance.Data;
  pFVar3 = this_00 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->NestedTransforms).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    if (((*(ulonglong *)this_00->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
       (uVar2 = FMovieSceneNumericVariant::GetTypeBits(this_00), uVar2 == '\x03')) {
      return true;
    }
    this_00 = this_00 + 2;
  }
  return false;
}

// TransformRangeConstrained @ 1461d8900

TRange<FFrameNumber> * __thiscall
FMovieSceneSequenceTransform::TransformRangeConstrained
          (FMovieSceneSequenceTransform *this,TRange<FFrameNumber> *__return_storage_ptr__,
          TRange<FFrameNumber> *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  int local_res10;
  FFrameNumber FStackX_14;
  TRange<FFrameTime> local_38;
  TRange<FFrameTime> local_20;
  
  UE::MovieScene::ConvertRange<FFrameNumber,FFrameTime>(&local_20,param_1);
  ComputeTraversedHull(this,&local_38,&local_20);
  if (local_38.LowerBound.Type.Value == '\x02') {
    local_res10 = CONCAT31(local_res10._1_3_,2);
    FStackX_14.Value = 0;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    FStackX_14.Value = local_38.LowerBound.Value.FrameNumber.Value;
    if (local_38.LowerBound.Type.Value != '\x01') {
      local_res10 = (uint)local_res10._1_3_ << 8;
    }
  }
  TVar1.Value.Value = FStackX_14.Value;
  TVar1._0_4_ = local_res10;
  if (local_38.UpperBound.Type.Value == '\x02') {
    local_res10 = CONCAT31(local_res10._1_3_,2);
    FStackX_14.Value = 0;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    FStackX_14.Value = local_38.UpperBound.Value.FrameNumber.Value;
    if (local_38.UpperBound.Type.Value != '\x01') {
      local_res10 = (uint)local_res10._1_3_ << 8;
    }
  }
  TVar2.Value.Value = FStackX_14.Value;
  TVar2._0_4_ = local_res10;
  __return_storage_ptr__->UpperBound = TVar2;
  __return_storage_ptr__->LowerBound = TVar1;
  return __return_storage_ptr__;
}

// TransformRangeConstrained @ 1461d89b0

TRange<FFrameTime> * __thiscall
FMovieSceneSequenceTransform::TransformRangeConstrained
          (FMovieSceneSequenceTransform *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  ComputeTraversedHull(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformRangePure @ 1461d89d0

TRange<FFrameNumber> * __thiscall
FMovieSceneSequenceTransform::TransformRangePure
          (FMovieSceneSequenceTransform *this,TRange<FFrameNumber> *__return_storage_ptr__,
          TRange<FFrameNumber> *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRange<FFrameTime> *pTVar3;
  int local_res10;
  FFrameNumber FStackX_14;
  TRange<FFrameTime> local_38;
  TRange<FFrameTime> local_20;
  
  pTVar3 = UE::MovieScene::ConvertRange<FFrameNumber,FFrameTime>(&local_20,param_1);
  ComputeTraversedHull(this,&local_38,pTVar3);
  if (local_38.LowerBound.Type.Value == '\x02') {
    local_res10 = CONCAT31(local_res10._1_3_,2);
    FStackX_14.Value = 0;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    FStackX_14.Value = local_38.LowerBound.Value.FrameNumber.Value;
    if (local_38.LowerBound.Type.Value != '\x01') {
      local_res10 = (uint)local_res10._1_3_ << 8;
    }
  }
  TVar1.Value.Value = FStackX_14.Value;
  TVar1._0_4_ = local_res10;
  if (local_38.UpperBound.Type.Value == '\x02') {
    local_res10 = CONCAT31(local_res10._1_3_,2);
    FStackX_14.Value = 0;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    FStackX_14.Value = local_38.UpperBound.Value.FrameNumber.Value;
    if (local_38.UpperBound.Type.Value != '\x01') {
      local_res10 = (uint)local_res10._1_3_ << 8;
    }
  }
  TVar2.Value.Value = FStackX_14.Value;
  TVar2._0_4_ = local_res10;
  __return_storage_ptr__->UpperBound = TVar2;
  __return_storage_ptr__->LowerBound = TVar1;
  return __return_storage_ptr__;
}

// TransformRangePure @ 1461d8a80

TRange<FFrameTime> * __thiscall
FMovieSceneSequenceTransform::TransformRangePure
          (FMovieSceneSequenceTransform *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  ComputeTraversedHull(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformRangeUnwarped @ 1461d8aa0

TRange<FFrameNumber> * __thiscall
FMovieSceneSequenceTransform::TransformRangeUnwarped
          (FMovieSceneSequenceTransform *this,TRange<FFrameNumber> *__return_storage_ptr__,
          TRange<FFrameNumber> *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  int local_res10;
  FFrameNumber FStackX_14;
  TRange<FFrameTime> local_38;
  TRange<FFrameTime> local_20;
  
  UE::MovieScene::ConvertRange<FFrameNumber,FFrameTime>(&local_20,param_1);
  ComputeTraversedHull(this,&local_38,&local_20);
  if (local_38.LowerBound.Type.Value == '\x02') {
    local_res10 = CONCAT31(local_res10._1_3_,2);
    FStackX_14.Value = 0;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    FStackX_14.Value = local_38.LowerBound.Value.FrameNumber.Value;
    if (local_38.LowerBound.Type.Value != '\x01') {
      local_res10 = (uint)local_res10._1_3_ << 8;
    }
  }
  TVar1.Value.Value = FStackX_14.Value;
  TVar1._0_4_ = local_res10;
  if (local_38.UpperBound.Type.Value == '\x02') {
    local_res10 = CONCAT31(local_res10._1_3_,2);
    FStackX_14.Value = 0;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    FStackX_14.Value = local_38.UpperBound.Value.FrameNumber.Value;
    if (local_38.UpperBound.Type.Value != '\x01') {
      local_res10 = (uint)local_res10._1_3_ << 8;
    }
  }
  TVar2.Value.Value = FStackX_14.Value;
  TVar2._0_4_ = local_res10;
  __return_storage_ptr__->UpperBound = TVar2;
  __return_storage_ptr__->LowerBound = TVar1;
  return __return_storage_ptr__;
}

// TransformRangeUnwarped @ 1461d8b50

TRange<FFrameTime> * __thiscall
FMovieSceneSequenceTransform::TransformRangeUnwarped
          (FMovieSceneSequenceTransform *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  ComputeTraversedHull(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformTime @ 1461d9830

FFrameTime __thiscall
FMovieSceneSequenceTransform::TransformTime(FMovieSceneSequenceTransform *this,FFrameTime param_1)

{
  int iVar1;
  FFrameTime FVar2;
  FMovieSceneNestedSequenceTransform *pFVar3;
  FMovieSceneNestedSequenceTransform *this_00;
  FMovieSceneTimeTransform *in_R8;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  
  if ((this->NestedTransforms).ArrayNum == 0) {
    ::operator*(param_1,in_R8);
    return param_1;
  }
  ::operator*((FFrameTime)&local_res8,in_R8);
  iVar1 = (this->NestedTransforms).ArrayNum;
  this_00 = (FMovieSceneNestedSequenceTransform *)(this->NestedTransforms).AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((this->NestedTransforms).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (this_00 == pFVar3) break;
    FVar2 = FMovieSceneNestedSequenceTransform::TransformTime(this_00,(FFrameTime)local_res20);
    this_00 = this_00 + 1;
    local_res8 = *(undefined8 *)FVar2;
  }
  *(undefined8 *)param_1 = local_res8;
  return param_1;
}

// TransformTime @ 1461d98f0

FFrameTime __thiscall
FMovieSceneSequenceTransform::TransformTime
          (FMovieSceneSequenceTransform *this,FFrameTime param_1,FTransformTimeParams *param_2)

{
  int iVar1;
  FMovieSceneTransformBreadcrumbs *this_00;
  uchar uVar2;
  FFrameTime FVar3;
  FMovieSceneNestedSequenceTransform *this_01;
  longlong *in_R9;
  FMovieSceneNestedSequenceTransform *pFVar4;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  ::operator*(param_1,(FMovieSceneTimeTransform *)param_2);
  this_00 = (FMovieSceneTransformBreadcrumbs *)*in_R9;
  if ((this_00 != (FMovieSceneTransformBreadcrumbs *)0x0) && (this_00->Mode == Dense)) {
    FMovieSceneTransformBreadcrumbs::AddBreadcrumb(this_00,(FFrameTime *)param_1);
  }
  iVar1 = (this->NestedTransforms).ArrayNum;
  if (iVar1 != 0) {
    this_01 = (FMovieSceneNestedSequenceTransform *)(this->NestedTransforms).AllocatorInstance.Data;
    pFVar4 = this_01 + iVar1;
    while( true ) {
      if ((this->NestedTransforms).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_01 == pFVar4) break;
      if ((*in_R9 != 0) &&
         ((*(char *)(*in_R9 + 0x10) == '\x01' ||
          (((*(ulonglong *)(this_01->TimeScale).Variant.Data & 0xfff8000000000000) ==
            0xfff8000000000000 &&
           (uVar2 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_01),
           uVar2 != 0xff)))))) {
        FMovieSceneTransformBreadcrumbs::AddBreadcrumb
                  ((FMovieSceneTransformBreadcrumbs *)*in_R9,(FFrameTime *)param_1);
      }
      FVar3 = FMovieSceneNestedSequenceTransform::TransformTime
                        (this_01,(FFrameTime)local_res20,*(FTransformTimeParams **)param_1);
      this_01 = this_01 + 1;
      *(undefined8 *)param_1 = *(undefined8 *)FVar3;
    }
  }
  return param_1;
}

// TransformTime @ 1461d99f0

void __thiscall
FMovieSceneSequenceTransform::TransformTime
          (FMovieSceneSequenceTransform *this,FFrameTime param_1,FFrameTime *param_2,
          FMovieSceneWarpCounter *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneNestedSequenceTransform *this_00;
  FMovieSceneNestedSequenceTransform *pFVar7;
  undefined1 local_res8 [24];
  undefined1 local_res20 [8];
  FFrameTime local_58;
  FMovieSceneWarpCounter *local_50;
  undefined8 local_48;
  byte local_40;
  
  local_40 = local_40 & 0xfe;
  iVar2 = *(int *)((longlong)&param_3->_padding_ + 4);
  local_48 = 0;
  *(undefined4 *)&param_3->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)param_3,0,(int *)((longlong)&param_3->_padding_ + 4));
  }
  local_50 = param_3;
  ::operator*((FFrameTime)&local_58,(FMovieSceneTimeTransform *)param_1);
  if ((param_3 != (FMovieSceneWarpCounter *)0x0) && ((char)param_3->_padding_ == '\x01')) {
    FMovieSceneTransformBreadcrumbs::AddBreadcrumb
              ((FMovieSceneTransformBreadcrumbs *)param_3,&local_58);
  }
  iVar2 = (this->NestedTransforms).ArrayNum;
  if (iVar2 != 0) {
    this_00 = (FMovieSceneNestedSequenceTransform *)(this->NestedTransforms).AllocatorInstance.Data;
    pFVar7 = this_00 + iVar2;
    while( true ) {
      if ((this->NestedTransforms).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar7) break;
      if ((param_3 != (FMovieSceneWarpCounter *)0x0) &&
         (((char)param_3->_padding_ == '\x01' ||
          (((*(ulonglong *)(this_00->TimeScale).Variant.Data & 0xfff8000000000000) ==
            0xfff8000000000000 &&
           (uVar4 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_00),
           uVar4 != 0xff)))))) {
        if (((FFrameTime *)param_3->_padding_ <= &local_58) &&
           ((&local_58 <
             (FFrameTime *)param_3->_padding_ + *(int *)((longlong)&param_3->_padding_ + 4) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (int)param_3->_padding_;
        piVar1 = (int *)((longlong)&param_3->_padding_ + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)param_3,piVar1);
        }
        *(int *)&param_3->_padding_ = iVar6 + 1;
        *(FFrameTime *)((FScriptContainerElement *)param_3->_padding_ + (longlong)iVar6 * 8) =
             local_58;
      }
      local_58 = FMovieSceneNestedSequenceTransform::TransformTime
                           (this_00,(FFrameTime)local_res20,(FTransformTimeParams *)local_58);
      this_00 = this_00 + 1;
      local_58 = *(FFrameTime *)local_58;
      param_3 = local_50;
    }
  }
  *param_2 = local_58;
  return;
}

// operator() @ 1504e60a0

bool __thiscall
`FMovieSceneSequenceTransform::InverseLinearOnly'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7015242943829116106>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7015242943829116106>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

