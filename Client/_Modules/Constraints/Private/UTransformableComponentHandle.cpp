// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 28

// StaticClass @ 14648f200

UClass * __cdecl UTransformableComponentHandle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TransformableComponentHandle",
               &Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton,
               StaticRegisterNativesUTransformableComponentHandle,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformableComponentHandle>,
               InternalVTableHelperCtorCaller<UTransformableComponentHandle>,local_res8,
               UTransformableHandle::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton;
}

// UTransformableComponentHandle @ 14649ee70

UTransformableComponentHandle * __thiscall
UTransformableComponentHandle::UTransformableComponentHandle
          (UTransformableComponentHandle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UTransformableComponentHandle__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 2;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  return this;
}

// UTransformableComponentHandle @ 14649eed0

UTransformableComponentHandle * __thiscall
UTransformableComponentHandle::UTransformableComponentHandle
          (UTransformableComponentHandle *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UTransformableComponentHandle__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 2;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  return this;
}

// ~UTransformableComponentHandle @ 14649fd70

void __thiscall
UTransformableComponentHandle::~UTransformableComponentHandle(UTransformableComponentHandle *this)

{
  this->_padding_ = (longlong)&___7UTransformableComponentHandle__6B_;
  UTransformableHandle::~UTransformableHandle((UTransformableHandle *)this);
  return;
}

// AddTransformKeys @ 1464a3a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UTransformableComponentHandle::AddTransformKeys
          (UTransformableComponentHandle *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          EMovieSceneTransformChannel *param_3,FFrameRate *param_4,UMovieSceneSection *param_5,
          bool param_6)

{
  int *piVar1;
  undefined1 *puVar2;
  EMovieSceneTransformChannel EVar3;
  FFrameNumber FVar4;
  FScriptContainerElement *pFVar5;
  FMovieSceneChannel *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar19;
  FMovieSceneChannelEntry *pFVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258;
  undefined1 local_257 [7];
  ForAnyElementType local_250;
  uint local_248 [4];
  longlong local_238;
  uint local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  uint local_208;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_200;
  int local_1f8;
  int iStack_1f4;
  longlong local_1f0;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *local_1e8;
  FMovieSceneChannelData local_1e0;
  ForAnyElementType *local_1c8;
  FScriptContainerElement *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  TRotator<double> local_158;
  TRotator<double> local_140;
  FDestructionSentinel local_128;
  TQuat<double> local_108;
  TQuat<double> local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 uStack_b0;
  undefined4 uStack_af;
  undefined1 uStack_ab;
  undefined2 uStack_aa;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (((param_5 == (UMovieSceneSection *)0x0) || (param_1->ArrayNum == 0)) ||
     (param_1->ArrayNum != param_2->ArrayNum)) {
    bVar12 = false;
  }
  else {
    EVar3 = *param_3;
    iVar22 = 0;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248[0] = 0;
    local_248[1] = 0;
    uVar25 = 0;
    local_200 = param_2;
    local_1e8 = param_1;
    if (((byte)EVar3 & 7) == 7) {
      local_a8 = 0;
      uStack_a4 = 1;
      local_a0 = 2;
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,3,&local_250,(int *)local_248,(int *)(local_248 + 1));
      *(ulonglong *)(local_250.Data + (longlong)iVar16 * 4) = CONCAT44(uStack_a4,local_a8);
      *(undefined4 *)(local_250.Data + (longlong)iVar16 * 4 + 8) = local_a0;
    }
    if ((EVar3 & Rotation) == Rotation) {
      local_98 = 3;
      uStack_94 = 4;
      local_90 = 5;
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,3,&local_250,(int *)local_248,(int *)(local_248 + 1));
      *(ulonglong *)(local_250.Data + (longlong)iVar16 * 4) = CONCAT44(uStack_94,local_98);
      *(undefined4 *)(local_250.Data + (longlong)iVar16 * 4 + 8) = local_90;
    }
    if ((EVar3 & Scale) == Scale) {
      local_88 = 6;
      uStack_84 = 7;
      local_80 = 8;
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,3,&local_250,(int *)local_248,(int *)(local_248 + 1));
      *(ulonglong *)(local_250.Data + (longlong)iVar16 * 4) = CONCAT44(uStack_84,local_88);
      *(undefined4 *)(local_250.Data + (longlong)iVar16 * 4 + 8) = local_80;
    }
    this_00 = UMovieSceneSection::GetChannelProxy(param_5);
    pUVar19 = FMovieSceneDoubleChannel::StaticStruct();
    pFVar20 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar19->_padding_);
    if (pFVar20 == (FMovieSceneChannelEntry *)0x0) {
      pFVar28 = (FScriptContainerElement *)0x0;
      local_220 = (FScriptContainerElement *)0x0;
      local_248[2] = 0;
    }
    else {
      uVar25 = (pFVar20->Channels).ArrayNum;
      pFVar28 = (pFVar20->Channels).AllocatorInstance.Data;
      local_248[2] = uVar25;
      local_220 = pFVar28;
      if (((int)uVar25 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
    }
    if ((param_2->ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    pFVar24 = (param_2->AllocatorInstance).Data;
    local_1b8 = *(undefined8 *)(pFVar24 + 0x20);
    uStack_1b0 = *(undefined8 *)(pFVar24 + 0x28);
    local_1a8 = *(undefined8 *)(pFVar24 + 0x30);
    local_108.Z = *(double *)(pFVar24 + 0x10);
    local_108.W = *(double *)(pFVar24 + 0x18);
    local_108.X = *(double *)pFVar24;
    local_108.Y = *(double *)(pFVar24 + 8);
    UE::Math::TQuat<double>::Rotator(&local_108,&local_158);
    local_1a0 = *(undefined8 *)(pFVar24 + 0x40);
    uStack_198 = *(undefined8 *)(pFVar24 + 0x48);
    local_190 = *(undefined8 *)(pFVar24 + 0x50);
    do {
      if ((iVar22 < (int)uVar25) && (*(char *)(*(longlong *)pFVar28 + 0x98) == '\0')) {
        switch(iVar22) {
        default:
          uVar29 = (undefined4)local_1b8;
          uVar30 = (undefined4)((ulonglong)local_1b8 >> 0x20);
          break;
        case 1:
          uVar29 = (undefined4)uStack_1b0;
          uVar30 = (undefined4)((ulonglong)uStack_1b0 >> 0x20);
          break;
        case 2:
          uVar29 = (undefined4)local_1a8;
          uVar30 = (undefined4)((ulonglong)local_1a8 >> 0x20);
          break;
        case 3:
          uVar29 = SUB84(local_158.Roll,0);
          uVar30 = (undefined4)((ulonglong)local_158.Roll >> 0x20);
          break;
        case 4:
          uVar29 = SUB84(local_158.Pitch,0);
          uVar30 = (undefined4)((ulonglong)local_158.Pitch >> 0x20);
          break;
        case 5:
          uVar29 = SUB84(local_158.Yaw,0);
          uVar30 = (undefined4)((ulonglong)local_158.Yaw >> 0x20);
          break;
        case 6:
          uVar29 = (undefined4)local_1a0;
          uVar30 = (undefined4)((ulonglong)local_1a0 >> 0x20);
          break;
        case 7:
          uVar29 = (undefined4)uStack_198;
          uVar30 = (undefined4)((ulonglong)uStack_198 >> 0x20);
          break;
        case 8:
          uVar29 = (undefined4)local_190;
          uVar30 = (undefined4)((ulonglong)local_190 >> 0x20);
        }
        lVar26 = *(longlong *)pFVar28;
        *(ulonglong *)(lVar26 + 0x90) = CONCAT44(uVar30,uVar29);
        *(undefined1 *)(lVar26 + 0x98) = 1;
      }
      iVar22 = iVar22 + 1;
      pFVar28 = pFVar28 + 8;
    } while (iVar22 < 9);
    local_230 = 0;
    iVar22 = local_1e8->ArrayNum;
    pFVar28 = local_220;
    if (0 < iVar22) {
      local_238 = 0;
      local_1f0 = 0;
      do {
        pTVar10 = local_1e8;
        lVar7 = local_1f0;
        uVar18 = local_230;
        lVar26 = local_238;
        uVar23 = ~local_230;
        uVar17 = 0;
        if ((int)local_230 < iVar22) {
          uVar17 = uVar23 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        pFVar24 = (pTVar10->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar18 < local_200->ArrayNum) {
          uVar17 = uVar23 >> 0x1f;
        }
        local_228 = pFVar24;
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        pFVar5 = (local_200->AllocatorInstance).Data;
        local_188 = *(undefined8 *)(pFVar5 + lVar7 + 0x20);
        uStack_180 = *(undefined8 *)(pFVar5 + lVar7 + 0x20 + 8);
        local_178 = *(undefined8 *)(pFVar5 + lVar7 + 0x30);
        local_e8.Z = *(double *)(pFVar5 + lVar7 + 0x10);
        local_e8.W = *(double *)(pFVar5 + lVar7 + 0x10 + 8);
        local_e8.X = *(double *)(pFVar5 + lVar7);
        local_e8.Y = *(double *)(pFVar5 + lVar7 + 8);
        UE::Math::TQuat<double>::Rotator(&local_e8,&local_140);
        local_170 = *(undefined8 *)(pFVar5 + lVar7 + 0x40);
        uStack_168 = *(undefined8 *)(pFVar5 + lVar7 + 0x40 + 8);
        local_160 = *(undefined8 *)(pFVar5 + lVar7 + 0x50);
        uVar21 = (ulonglong)(int)local_248[0];
        local_208 = local_248[0];
        local_1c0 = local_250.Data + uVar21 * 4;
        FVar27.Data = local_250.Data;
        while( true ) {
          pFVar5 = local_1c0;
          if (local_248[0] != (uint)uVar21) {
            local_258 = 0;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_258);
          }
          if (FVar27.Data == pFVar5) break;
          iVar22 = *(int *)FVar27.Data;
          if ((-1 < iVar22) && (iVar22 < (int)uVar25)) {
            switch(iVar22) {
            case 0:
              uVar29 = (undefined4)local_188;
              uVar30 = (undefined4)((ulonglong)local_188 >> 0x20);
              break;
            case 1:
              uVar29 = (undefined4)uStack_180;
              uVar30 = (undefined4)((ulonglong)uStack_180 >> 0x20);
              break;
            case 2:
              uVar29 = (undefined4)local_178;
              uVar30 = (undefined4)((ulonglong)local_178 >> 0x20);
              break;
            case 3:
              uVar29 = SUB84(local_140.Roll,0);
              uVar30 = (undefined4)((ulonglong)local_140.Roll >> 0x20);
              break;
            case 4:
              uVar29 = SUB84(local_140.Pitch,0);
              uVar30 = (undefined4)((ulonglong)local_140.Pitch >> 0x20);
              break;
            case 5:
              uVar29 = SUB84(local_140.Yaw,0);
              uVar30 = (undefined4)((ulonglong)local_140.Yaw >> 0x20);
              break;
            case 6:
              uVar29 = (undefined4)local_170;
              uVar30 = (undefined4)((ulonglong)local_170 >> 0x20);
              break;
            case 7:
              uVar29 = (undefined4)uStack_168;
              uVar30 = (undefined4)((ulonglong)uStack_168 >> 0x20);
              break;
            case 8:
              uVar29 = (undefined4)local_160;
              uVar30 = (undefined4)((ulonglong)local_160 >> 0x20);
              break;
            default:
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6375293147437597167>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\TransformableHandle.cpp"
                                  ,0x1ef,"false");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              uVar29 = 0;
              uVar30 = 0;
              if ((iVar22 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
            }
            pFVar6 = *(FMovieSceneChannel **)(pFVar28 + (longlong)iVar22 * 8);
            FMovieSceneChannelData::FMovieSceneChannelData
                      (&local_1e0,pFVar6,
                       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar6[1].KeyAddedEvent,
                       (FKeyHandleLookupTable *)&pFVar6[1].KeyDeletedEvent.field_0x10);
            local_1c8 = (ForAnyElementType *)&pFVar6[1].KeyAddedEvent.field_0x10;
            if (((local_1e0.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
                (local_1c8 == (ForAnyElementType *)0x0)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Times && Values",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                    ,0x122,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            uVar18 = FMovieSceneChannelData::FindKey
                               (&local_1e0,(FFrameNumber)*(int *)(pFVar24 + lVar26 * 4),
                                (FFrameNumber)0x0);
            if (uVar18 == 0xffffffff) {
              FVar4.Value = *(int *)(pFVar24 + lVar26 * 4);
              local_c8 = CONCAT44(uVar30,uVar29);
              uStack_af = 0x2000000;
              uStack_aa = 0;
              uStack_ab = 0;
              uStack_c0 = 0;
              uStack_b0 = 0;
              local_b8 = 0;
              iVar22 = FMovieSceneChannelData::AddKeyInternal(&local_1e0,FVar4);
              pFVar11 = local_1c8;
              if (((local_1c8->Data <= (FScriptContainerElement *)&local_c8) &&
                  ((FScriptContainerElement *)&local_c8 <
                   local_1c8->Data + (longlong)*(int *)((longlong)&local_1c8[1].Data + 4) * 0x20))
                 && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar16 = *(int *)&pFVar11[1].Data;
              piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
              if (iVar16 == *piVar1) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,pFVar11,piVar1);
              }
              *(int *)&pFVar11[1].Data = iVar16 + 1;
              lVar26 = (longlong)iVar22 * 0x20;
              memmove(pFVar11->Data + lVar26 + 0x20,pFVar11->Data + lVar26,
                      (longlong)(iVar16 - iVar22) << 5);
              pFVar5 = pFVar11->Data;
              pFVar24 = pFVar5 + lVar26;
              *(undefined8 *)pFVar24 = local_c8;
              *(undefined8 *)(pFVar24 + 8) = uStack_c0;
              pFVar5 = pFVar5 + lVar26 + 0x10;
              *(undefined8 *)pFVar5 = local_b8;
              *(ulonglong *)(pFVar5 + 8) =
                   CONCAT26(uStack_aa,CONCAT15(uStack_ab,CONCAT41(uStack_af,uStack_b0)));
              pFVar24 = local_228;
              lVar26 = local_238;
              if ((local_1e0.OwningChannel != (FMovieSceneChannel *)0x0) &&
                 (bVar12 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                     ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                      &(local_1e0.OwningChannel)->KeyAddedEvent),
                 pFVar24 = local_228, lVar26 = local_238, bVar12)) {
                local_218.Data = (FScriptContainerElement *)0x0;
                local_210 = 0;
                local_1f8 = iVar22;
                iStack_1f4 = FVar4.Value;
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_218,(int *)((longlong)&local_210 + 4));
                pFVar6 = local_1e0.OwningChannel;
                local_210 = CONCAT44(local_210._4_4_,iVar22 + 1);
                *(ulonglong *)(local_218.Data + (longlong)iVar22 * 8) =
                     CONCAT44(iStack_1f4,local_1f8);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                           &(local_1e0.OwningChannel)->KeyAddedEvent,(FWriteAccessScope *)&local_128
                          );
                puVar2 = &(pFVar6->KeyAddedEvent).field_0x1c;
                *(int *)puVar2 = *(int *)puVar2 + 1;
                bVar12 = false;
                uVar25 = *(int *)&(pFVar6->KeyAddedEvent).field_0x10 - 1;
                if (-1 < (int)uVar25) {
                  lVar26 = (longlong)(int)uVar25 << 4;
                  bVar12 = false;
                  do {
                    uVar18 = 0;
                    if ((int)uVar25 < *(int *)&(pFVar6->KeyAddedEvent).field_0x10) {
                      uVar18 = ~uVar25 >> 0x1f;
                    }
                    if ((uVar18 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      uVar13 = (*pcVar9)();
                      return (bool)uVar13;
                    }
                    lVar7 = *(longlong *)&(pFVar6->KeyAddedEvent).field_0x8;
                    if (((*(int *)(lVar26 + 8 + lVar7) == 0) ||
                        (plVar8 = *(longlong **)(lVar26 + lVar7), plVar8 == (longlong *)0x0)) ||
                       (cVar15 = (**(code **)(*plVar8 + 0x68))(plVar8,pFVar6,&local_218),
                       cVar15 == '\0')) {
                      bVar12 = true;
                    }
                    lVar26 = lVar26 + -0x10;
                    uVar25 = uVar25 - 1;
                  } while (-1 < (int)uVar25);
                }
                puVar2 = &(pFVar6->KeyAddedEvent).field_0x1c;
                *(int *)puVar2 = *(int *)puVar2 + -1;
                if (bVar12) {
                  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pFVar6->KeyAddedEvent,false);
                }
                if (local_128.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
                }
                pFVar24 = local_228;
                lVar26 = local_238;
                pFVar28 = local_220;
                uVar25 = local_248[2];
                if (local_218.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_218.Data);
                  pFVar24 = local_228;
                  lVar26 = local_238;
                  pFVar28 = local_220;
                  uVar25 = local_248[2];
                }
              }
            }
            else {
              iVar22 = *(int *)&local_1c8[1].Data;
              pFVar24 = local_1c8->Data;
              if ((iVar22 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              uVar17 = 0;
              if ((int)uVar18 < iVar22) {
                uVar17 = ~uVar18 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              *(ulonglong *)(pFVar24 + (longlong)(int)uVar18 * 0x20) = CONCAT44(uVar30,uVar29);
              pFVar24 = local_228;
              lVar26 = local_238;
            }
          }
          uVar21 = (ulonglong)local_208;
          FVar27.Data = FVar27.Data + 4;
        }
        local_238 = lVar26 + 1;
        local_230 = local_230 + 1;
        local_1f0 = local_1f0 + 0x60;
        iVar22 = local_1e8->ArrayNum;
      } while ((int)local_230 < iVar22);
    }
    uVar18 = local_248[0];
    pFVar24 = local_250.Data + (longlong)(int)local_248[0] * 4;
    FVar27.Data = local_250.Data;
    while( true ) {
      if (local_248[0] != uVar18) {
        local_257[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_257);
      }
      if (FVar27.Data == pFVar24) break;
      iVar22 = *(int *)FVar27.Data;
      if ((-1 < iVar22) && (iVar22 < (int)uVar25)) {
        if ((iVar22 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        FMovieSceneDoubleChannel::AutoSetTangents
                  (*(FMovieSceneDoubleChannel **)(pFVar28 + (longlong)iVar22 * 8),0.0);
      }
      FVar27.Data = FVar27.Data + 4;
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    bVar12 = true;
  }
  return bVar12;
}

// Duplicate @ 1464adf70

UTransformableHandle * __thiscall
UTransformableComponentHandle::Duplicate(UTransformableComponentHandle *this,UObject *param_1)

{
  UClass *pUVar1;
  UTransformableHandle *pUVar2;
  
  pUVar1 = StaticClass();
  pUVar2 = (UTransformableHandle *)
           DuplicateObject_Internal(pUVar1,(UObject *)this,param_1,(FName)0x0);
  pUVar2[1]._padding_ = (longlong)(this->Component).WeakPtr;
  pUVar2[1]._padding_ = (longlong)this->SocketName;
  return pUVar2;
}

// GetDoubleChannels @ 1464b2c80

TArrayView<FMovieSceneDoubleChannel_*,int> * __thiscall
UTransformableComponentHandle::GetDoubleChannels
          (UTransformableComponentHandle *this,
          TArrayView<FMovieSceneDoubleChannel_*,int> *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  FMovieSceneChannelProxy *this_00;
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    this_00 = UMovieSceneSection::GetChannelProxy(param_1);
    FMovieSceneChannelProxy::GetChannels<FMovieSceneDoubleChannel>(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  *__return_storage_ptr__ = EmptyChannelsView;
  return __return_storage_ptr__;
}

// GetEvaluationBinding @ 1464b2d10

FComponentEvaluationGraphBinding * __cdecl UTransformableComponentHandle::GetEvaluationBinding(void)

{
  return &EvaluationBinding;
}

// GetFloatChannels @ 1464b33d0

TArrayView<FMovieSceneFloatChannel_*,int> * __thiscall
UTransformableComponentHandle::GetFloatChannels
          (UTransformableComponentHandle *this,
          TArrayView<FMovieSceneFloatChannel_*,int> *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  *__return_storage_ptr__ = EmptyChannelsView;
  return __return_storage_ptr__;
}

// GetGlobalTransform @ 1464b3bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UTransformableComponentHandle::GetGlobalTransform
          (UTransformableComponentHandle *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  bool bVar2;
  USceneComponent *pUVar3;
  FAnimationEvaluator *this_00;
  UObject *pUVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_108 [32];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar3 = (USceneComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  if (pUVar3 == (USceneComponent *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    uVar6 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar7 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    if (TransformableHandleUtils::bNewEvaluation != false) {
      this_00 = TransformableHandleUtils::EvaluateComponent(pUVar3);
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
      if (((bVar2) && ((this_00->Context).ComponentSpaceTransforms.ArrayNum != 0)) &&
         (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
         (this_00->Context).ComponentSpaceTransforms.ArrayNum ==
         *(int *)(&pUVar4[0x27].field_0x8 + (longlong)*(int *)&pUVar4[0x28].field_0x20 * 0x10))) {
        UE::Anim::FAnimationEvaluator::GetGlobalTransform
                  (this_00,__return_storage_ptr__,this->SocketName);
        return __return_storage_ptr__;
      }
      TransformableHandleUtils::GetGlobalTransform(__return_storage_ptr__,pUVar3,this->SocketName);
      return __return_storage_ptr__;
    }
    bVar2 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
      pdVar5 = (double *)
               (**(code **)(*(longlong *)pUVar4 + 0x520))(pUVar4,local_88,this->SocketName,0);
    }
    else {
      pdVar5 = local_e8;
      local_e8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_e8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_c8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_c8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    }
    dVar1 = pdVar5[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar5;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = pdVar5[3];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar5[2];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = pdVar5[5];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar5[4];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = pdVar5[7];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar5[6];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = pdVar5[9];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar5[8];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
    uVar6 = *(undefined4 *)(pdVar5 + 10);
    uVar7 = *(undefined4 *)((longlong)pdVar5 + 0x54);
    uVar8 = *(undefined4 *)(pdVar5 + 0xb);
    uVar9 = *(undefined4 *)((longlong)pdVar5 + 0x5c);
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar6;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar7;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar9;
  return __return_storage_ptr__;
}

// GetHash @ 1464b42a0

uint __thiscall UTransformableComponentHandle::GetHash(UTransformableComponentHandle *this)

{
  bool bVar1;
  uint uVar2;
  UObject *pUVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    uVar2 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    return uVar2 >> 0x10 ^ uVar2;
  }
  return 0;
}

// GetLocalTransform @ 1464b4410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UTransformableComponentHandle::GetLocalTransform
          (UTransformableComponentHandle *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  bool bVar2;
  USceneComponent *this_00;
  TTransform<double> *pTVar3;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  bVar2 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar2) {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    pTVar3 = USceneComponent::GetRelativeTransform(this_00,&local_78);
  }
  else {
    pTVar3 = &local_d8;
    local_d8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_d8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_d8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_d8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_d8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_d8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  dVar1 = (pTVar3->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// GetPrerequisiteObject @ 1464b58b0

UObject * __thiscall
UTransformableComponentHandle::GetPrerequisiteObject(UTransformableComponentHandle *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  return pUVar1;
}

// GetPrimaryPrerequisite @ 1464b58f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickPrerequisite * __thiscall
UTransformableComponentHandle::GetPrimaryPrerequisite
          (UTransformableComponentHandle *this,FTickPrerequisite *__return_storage_ptr__,
          bool param_1)

{
  bool bVar1;
  USceneComponent *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar1) {
    pUVar2 = (USceneComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    ::`anonymous_namespace'::LookForPrimaryPrerequisite(__return_storage_ptr__,pUVar2,param_1);
    return __return_storage_ptr__;
  }
  *__return_storage_ptr__ = DummyPrerex;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1464b61d0

UClass * __cdecl UTransformableComponentHandle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TransformableComponentHandle",
               &Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton,
               StaticRegisterNativesUTransformableComponentHandle,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformableComponentHandle>,
               InternalVTableHelperCtorCaller<UTransformableComponentHandle>,local_res8,
               UTransformableHandle::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton;
}

// GetTarget @ 1464b6db0

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
UTransformableComponentHandle::GetTarget(UTransformableComponentHandle *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->Component).WeakPtr;
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)in_RDX;
}

// GetTickFunction @ 1464b6fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickFunction * __thiscall
UTransformableComponentHandle::GetTickFunction(UTransformableComponentHandle *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    return (FTickFunction *)&pUVar2[1].field_0x10;
  }
  return (FTickFunction *)0x0;
}

// HasDirectDependencyWith @ 1464b8120

bool __thiscall
UTransformableComponentHandle::HasDirectDependencyWith
          (UTransformableComponentHandle *this,UTransformableHandle *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  uint uVar5;
  
  uVar3 = (**(code **)(param_1->_padding_ + 0x328))(param_1);
  if ((uVar3 != 0) && (bVar2 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr), bVar2)) {
    pUVar4 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    for (uVar1 = *(ulonglong *)&pUVar4[5].field_0x8; uVar1 != 0;
        uVar1 = *(ulonglong *)(uVar1 + 0xd0)) {
      uVar5 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      if ((uVar5 >> 0x10 ^ uVar5) == uVar3) {
        return true;
      }
    }
  }
  return false;
}

// IsValid @ 1464b9640

bool __thiscall
UTransformableComponentHandle::IsValid(UTransformableComponentHandle *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  return bVar1;
}

// PostLoad @ 1464bb750

void __thiscall UTransformableComponentHandle::PostLoad(UTransformableComponentHandle *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UTransformableComponentHandle **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PreEvaluate @ 1464bba60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableComponentHandle::PreEvaluate(UTransformableComponentHandle *this,bool param_1)

{
  bool bVar1;
  USceneComponent *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (((bVar1) && (TransformableHandleUtils::bNewEvaluation != false)) &&
     (this->SocketName != (FName)0x0)) {
    pUVar2 = (USceneComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    TransformableHandleUtils::EvaluateComponent(pUVar2);
  }
  return;
}

// RegisterDelegates @ 1464bd0e0

void __thiscall
UTransformableComponentHandle::RegisterDelegates(UTransformableComponentHandle *this)

{
  return;
}

// ResolveBoundObjects @ 1464bfae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableComponentHandle::ResolveBoundObjects
          (UTransformableComponentHandle *this,FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_2,UObject *param_3)

{
  TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  AActor *this_01;
  UClass *pUVar5;
  AActor *pAVar6;
  AActor *pAVar7;
  USceneComponent *pUVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  AActor *pAVar13;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  AActor *local_158;
  AActor *local_150;
  USceneComponent *local_148;
  USceneComponent *local_140;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_138;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_128;
  longlong local_118 [24];
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  this_00 = &this->Component;
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr,true);
  local_138.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_138.Object = param_2->Object;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneObjectBindingID::ResolveBoundObjects
            ((FMovieSceneObjectBindingID *)((longlong)&this->_padding_ + 4),&local_128,param_1,
             &local_138);
  if (local_128.ArrayNum < 1) goto LAB_1464bfe28;
  if (local_128.ArrayNum < 1) {
    local_168 = 0;
    local_160 = (longlong)local_128.ArrayNum;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_01 = (AActor *)FWeakObjectPtr::Get(&(local_128.DataPtr)->WeakPtr);
  if (this_01 == (AActor *)0x0) {
LAB_1464bfbd1:
    this_01 = (AActor *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_1464bfbd1;
  }
  if (this_01 == (AActor *)0x0) {
    pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(&(local_128.DataPtr)->WeakPtr);
    if (pUVar8 != (USceneComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar5->_padding_)) &&
         (bVar3 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals<USceneComponent,bool>
                            (this_00,pUVar8), !bVar3)) {
        local_140 = pUVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_140);
      }
    }
    goto LAB_1464bfe28;
  }
  local_58 = (longlong *)0x0;
  local_4c = 0x18;
  local_50 = 0;
  pAVar6 = (AActor *)Z_Construct_UClass_USceneComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar6 != (AActor *)0x0) goto LAB_1464bfc18;
LAB_1464bfc49:
    pAVar13 = (AActor *)0x0;
  }
  else {
    if (pAVar6 == (AActor *)0x0) goto LAB_1464bfc49;
    UE::GC::MarkAsReachable((UObject *)pAVar6);
LAB_1464bfc18:
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_1464bfc49;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)(pAVar6->PrimaryActorTick)._padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((pAVar6->PrimaryActorTick)._padding_ + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pAVar13 = pAVar6;
    if (!bVar3) goto LAB_1464bfc49;
  }
  pAVar7 = (AActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar13 == pAVar7) {
    local_158 = pAVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_01,(TSubclassOf<UActorComponent>)&local_158,
               (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_118);
  }
  else {
    local_150 = pAVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_01,(TSubclassOf<UActorComponent>)&local_150,
               (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_118);
  }
  plVar9 = local_118;
  if (local_58 != (longlong *)0x0) {
    plVar9 = local_58;
  }
  for (plVar11 = plVar9; plVar11 != plVar9 + local_50; plVar11 = plVar11 + 1) {
    if ((pUVar4 != (UObject *)0x0) &&
       (*(longlong *)(*plVar11 + 0x18) == *(longlong *)&pUVar4->field_0x18)) {
      uVar10 = (uint)((longlong)plVar11 - (longlong)plVar9 >> 3);
      if (uVar10 != 0xffffffff) {
        uVar12 = 0;
        if ((int)uVar10 < local_50) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_168 = (longlong)(int)uVar10;
          local_160 = (longlong)local_50;
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
        plVar9 = local_118;
        if (local_58 != (longlong *)0x0) {
          plVar9 = local_58;
        }
        pUVar8 = (USceneComponent *)plVar9[(int)uVar10];
        goto LAB_1464bfd02;
      }
      break;
    }
  }
  pUVar8 = (this_01->RootComponent).field0_0x0.DebugPtr;
LAB_1464bfd02:
  bVar3 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals<USceneComponent,bool>
                    (this_00,pUVar8);
  if (!bVar3) {
    local_148 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_148);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
LAB_1464bfe28:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetGlobalTransform @ 1464c0960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableComponentHandle::SetGlobalTransform
          (UTransformableComponentHandle *this,TTransform<double> *param_1)

{
  TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *this_00;
  double dVar1;
  bool bVar2;
  longlong lVar3;
  USceneComponent *pUVar4;
  UActorComponent *pUVar5;
  UWorld *pUVar6;
  TMulticastDelegate<void___cdecl(USceneComponent_*),FDefaultDelegateUserPolicy> *this_01;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = &this->Component;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) {
    return;
  }
  lVar3 = (**(code **)(this->_padding_ + 0x2c8))(this,local_98);
  dVar8 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar7 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
  uVar12 = SUB84(__real_3ff0000000000000,0);
  uVar14 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar9 = SUB84(__real_bff0000000000000,0);
  uVar10 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar15 = uVar12;
  uVar16 = uVar14;
  if ((*(double *)(lVar3 + 0x40) <= 0.0) &&
     (uVar15 = uVar9, uVar16 = uVar10, 0.0 <= *(double *)(lVar3 + 0x40))) {
    uVar15 = 0;
    uVar16 = 0;
  }
  uVar11 = uVar12;
  uVar13 = uVar14;
  if ((dVar8 <= 0.0) && (uVar11 = uVar9, uVar13 = uVar10, 0.0 <= dVar8)) {
    uVar11 = 0;
    uVar13 = 0;
  }
  if ((double)CONCAT44(uVar16,uVar15) == (double)CONCAT44(uVar13,uVar11)) {
    if ((*(double *)(lVar3 + 0x48) <= 0.0) &&
       (uVar12 = uVar9, uVar14 = uVar10, 0.0 <= *(double *)(lVar3 + 0x48))) {
      uVar12 = 0;
      uVar14 = 0;
    }
    dVar8 = __real_3ff0000000000000;
    if ((dVar7 <= 0.0) && (dVar8 = __real_bff0000000000000, 0.0 <= dVar7)) {
      dVar8 = 0.0;
    }
    if ((double)CONCAT44(uVar14,uVar12) == dVar8) {
      dVar8 = __real_3ff0000000000000;
      if ((*(double *)(lVar3 + 0x50) <= 0.0) &&
         (dVar8 = __real_bff0000000000000, 0.0 <= *(double *)(lVar3 + 0x50))) {
        dVar8 = 0.0;
      }
      dVar7 = __real_3ff0000000000000;
      if ((dVar1 <= 0.0) && (dVar7 = __real_bff0000000000000, 0.0 <= dVar1)) {
        dVar7 = 0.0;
      }
      if (dVar8 == dVar7) {
        bVar2 = false;
        goto LAB_1464c0a96;
      }
    }
  }
  bVar2 = true;
LAB_1464c0a96:
  pUVar4 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  USceneComponent::SetWorldTransform(pUVar4,param_1,false,(FHitResult *)0x0,None);
  pUVar5 = (UActorComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  if ((pUVar5->WorldPrivate != (UWorld *)0x0) ||
     (pUVar6 = UActorComponent::GetWorld_Uncached(pUVar5), pUVar6 != (UWorld *)0x0)) {
    this_01 = FConstraintsManagerController::OnSceneComponentConstrained();
    pUVar4 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegate<void___cdecl(USceneComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              (this_01,pUVar4);
  }
  if (bVar2) {
    pUVar5 = (UActorComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UActorComponent::MarkRenderStateDirty(pUVar5);
  }
  return;
}

// SetLocalTransform @ 1464c0b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableComponentHandle::SetLocalTransform
          (UTransformableComponentHandle *this,TTransform<double> *param_1)

{
  TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *this_00;
  bool bVar1;
  USceneComponent *pUVar2;
  UActorComponent *this_01;
  UWorld *pUVar3;
  TMulticastDelegate<void___cdecl(USceneComponent_*),FDefaultDelegateUserPolicy> *this_02;
  
  this_00 = &this->Component;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    USceneComponent::SetRelativeTransform(pUVar2,param_1,false,(FHitResult *)0x0,None);
    this_01 = (UActorComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    if ((this_01->WorldPrivate == (UWorld *)0x0) &&
       (pUVar3 = UActorComponent::GetWorld_Uncached(this_01), pUVar3 == (UWorld *)0x0)) {
      return;
    }
    this_02 = FConstraintsManagerController::OnSceneComponentConstrained();
    pUVar2 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegate<void___cdecl(USceneComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              (this_02,pUVar2);
  }
  return;
}

// StaticRegisterNativesUTransformableComponentHandle @ 1464c2050

void __cdecl UTransformableComponentHandle::StaticRegisterNativesUTransformableComponentHandle(void)

{
  return;
}

// TickTarget @ 1464c2540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTransformableComponentHandle::TickTarget(UTransformableComponentHandle *this)

{
  int iVar1;
  bool bVar2;
  USceneComponent *pUVar3;
  USkeletalMeshComponent *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  AActor *this_00;
  UClass *local_res8;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar2) {
    if (TransformableHandleUtils::bNewEvaluation == false) {
      pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
      if (((0 < TransformableHandleUtils::SkeletalMeshTickingMode) &&
          (TransformableHandleUtils::bNewEvaluation == false)) &&
         (pUVar4 != (USkeletalMeshComponent *)0x0)) {
        if (TransformableHandleUtils::SkeletalMeshTickingMode == 1) {
          pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            pUVar4 = (USkeletalMeshComponent *)0x0;
          }
          TransformableHandleUtils::TickSkeletalMeshComponent(pUVar4);
          return;
        }
        this_00 = (AActor *)pUVar4->_padding_;
        if (this_00 != (AActor *)0x0) {
          do {
            pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar5 != (UClass *)0x0) goto LAB_1464c264c;
LAB_1464c267d:
              pUVar6 = (UClass *)0x0;
            }
            else {
              if (pUVar5 == (UClass *)0x0) goto LAB_1464c267d;
              UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_1464c264c:
              pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
              if (pUVar6 == (UClass *)0x0) goto LAB_1464c267d;
              iVar1 = (int)pUVar6->_padding_;
              if (((int)pUVar5->_padding_ < iVar1) ||
                 ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
                  &pUVar6->_padding_)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              pUVar6 = pUVar5;
              if (!bVar2) goto LAB_1464c267d;
            }
            pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
            local_res8 = pUVar5;
            if (pUVar6 == pUVar7) {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
              AActor::
              ForEachComponent_Internal<USkeletalMeshComponent,1,1,void_(__cdecl*)(USkeletalMeshComponent_*)>
                        (this_00,(TSubclassOf<UActorComponent>)&local_res8,
                         TransformableHandleUtils::TickSkeletalMeshComponent);
            }
            else {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
              AActor::
              ForEachComponent_Internal<USkeletalMeshComponent,0,1,void_(__cdecl*)(USkeletalMeshComponent_*)>
                        (this_00,(TSubclassOf<UActorComponent>)&local_res8,
                         TransformableHandleUtils::TickSkeletalMeshComponent);
            }
            this_00 = AActor::GetAttachParentActor(this_00);
          } while (this_00 != (AActor *)0x0);
        }
      }
    }
    else {
      local_res8 = (UClass *)0x0;
      if (this->SocketName != (FName)0x0) {
        pUVar3 = (USceneComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
        TransformableHandleUtils::EvaluateComponent(pUVar3);
        return;
      }
    }
  }
  return;
}

// UnregisterDelegates @ 1464c3ce0

void __thiscall
UTransformableComponentHandle::UnregisterDelegates(UTransformableComponentHandle *this)

{
  return;
}

