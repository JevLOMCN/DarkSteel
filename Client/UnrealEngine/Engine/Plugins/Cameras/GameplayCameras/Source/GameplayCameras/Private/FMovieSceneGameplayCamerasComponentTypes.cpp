// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// FMovieSceneGameplayCamerasComponentTypes @ 14d5fb910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneGameplayCamerasComponentTypes * __thiscall
UE::Cameras::FMovieSceneGameplayCamerasComponentTypes::FMovieSceneGameplayCamerasComponentTypes
          (FMovieSceneGameplayCamerasComponentTypes *this)

{
  TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> *pTVar1;
  TArray<UE::MovieScene::FPropertyCompositeDefinition,TSizedDefaultAllocator<32>_> *pTVar2;
  TComponentTypeID<double> TVar3;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
  TVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TComponentTypeID<FGuid> TVar8;
  FComponentTypeID FVar9;
  TComponentTypeID<FCameraFramingZone> TVar10;
  uint uVar11;
  int iVar12;
  FBuiltInComponentTypes *this_00;
  FComponentRegistry *this_01;
  undefined6 extraout_var;
  FString *pFVar13;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  FMovieSceneGameplayCamerasComponentTypes *pFVar14;
  FPropertyDefinition *pFVar15;
  UClass *pUVar16;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar17;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar18;
  longlong lVar19;
  FPropertyDefinition *this_02;
  ForAnyElementType FVar20;
  undefined1 auStack_168 [32];
  uint *local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  wchar_t local_108;
  wchar_t local_106;
  wchar_t local_104 [2];
  uchar local_100 [8];
  ICustomPropertyRegistration *local_f8;
  FMovieSceneGameplayCamerasComponentTypes *local_f0;
  FString local_e8;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_b8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_a8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_98;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_88;
  undefined **local_78;
  uchar local_70 [4];
  undefined4 local_6c;
  FString local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_58;
  uchar local_50 [24];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_168;
  (this->CameraFramingZone).PropertyTag = 0xffff;
  (this->CameraFramingZone).InitialValue = (TComponentTypeID<FCameraFramingZone>)0xffff;
  pTVar1 = &(this->CameraFramingZone).PropertyTraits;
  (this->CameraFramingZone).CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
        )0xffffffff;
  this->CameraParameterOverrideID = (TComponentTypeID<FGuid>)0xffff;
  *pTVar1 = (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>)
            &___7__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__6B_;
  local_f8 = (ICustomPropertyRegistration *)&this->CustomCameraFramingZoneAccessors;
  (this->CustomCameraFramingZoneAccessors).CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
        )0x0;
  ((TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,1>
    *)local_f8)->_padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE___00_MovieScene_UE__6B_
  ;
  (this->CustomCameraFramingZoneAccessors).CustomAccessors.ArrayNum = 0;
  (this->CustomCameraFramingZoneAccessors).CustomAccessors.ArrayMax = 1;
  local_f0 = this;
  this_00 = MovieScene::FBuiltInComponentTypes::Get();
  this_01 = UMovieSceneEntitySystemLinker::GetComponents();
  local_d8 = 0;
  local_d0 = 2;
  TVar8 = MovieScene::FComponentRegistry::NewComponentType<FGuid>
                    (this_01,&local_108,(FNewComponentTypeParams *)L"Camera Parameter ID");
  this->CameraParameterOverrideID = *(TComponentTypeID<FGuid> *)CONCAT62(extraout_var,TVar8);
  pFVar13 = ::FString::FString(&local_68,L"Initial ");
  ::FString::ConcatFC(&local_e8,pFVar13,L"Camera Framing Zone");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar9 = MovieScene::FComponentRegistry::NewTag(this_01,&local_106,None);
  local_c8 = 0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar20.Data = local_e8.Data.AllocatorInstance.Data;
  }
  (this->CameraFramingZone).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_00,FVar9.Value);
  local_c0 = 9;
  TVar10 = MovieScene::FComponentRegistry::NewComponentType<FCameraFramingZone>
                     (this_01,local_104,(FNewComponentTypeParams *)FVar20.Data);
  (this->CameraFramingZone).InitialValue =
       *(TComponentTypeID<FCameraFramingZone> *)CONCAT62(extraout_var_01,TVar10);
  if ((FNewComponentTypeParams *)local_e8.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  MovieScene::FPropertyRegistry::
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
            (&this_00->PropertyRegistry,&this->CameraFramingZone,
             L"Apply FCameraFramingZone Properties");
  TVar4 = (this->CameraFramingZone).CompositeID;
  iVar12 = (this_00->PropertyRegistry).Properties.ArrayNum;
  uVar11 = 0;
  if ((int)TVar4 < iVar12) {
    uVar11 = ~(uint)TVar4 >> 0x1f;
  }
  if (uVar11 == 0) {
    local_148 = (uint *)(longlong)(int)TVar4;
    local_140 = (FScriptContainerElement *)(longlong)iVar12;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  this_02 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar4 * 0x70);
  this_02->TraitsInstance = (IPropertyTraits *)pTVar1;
  local_b8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar12 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar3 = this_00->DoubleResult[0];
  if (iVar12 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  local_b8.ArrayNum = iVar12;
  pFVar15 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_b8,0);
  if (this_02 != pFVar15) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  pTVar2 = &(this_00->PropertyRegistry).CompositeDefinitions;
  local_118 = (uint)(ushort)TVar3;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_118) &&
     (lVar19 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_118 < pFVar5 + lVar19 * 4)) {
    local_130 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_128 = 4;
    local_148 = &local_118;
    local_140 = pFVar5;
    local_138 = lVar19;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  iVar12 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar12 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar2->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar12 + 1;
  *(uint *)(pFVar5 + (longlong)iVar12 * 4) = local_118;
  this_02->DoubleCompositeMask =
       this_02->DoubleCompositeMask | 1 << ((byte)this_02->CompositeSize & 0x1f);
  this_02->CompositeSize = this_02->CompositeSize + 1;
  local_a8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar12 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar3 = this_00->DoubleResult[1];
  if (iVar12 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  local_a8.ArrayNum = iVar12;
  pFVar15 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_a8,0);
  if (this_02 != pFVar15) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  local_114 = CONCAT22(8,TVar3);
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_114) &&
     (lVar19 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_114 < pFVar5 + lVar19 * 4)) {
    local_130 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_128 = 4;
    local_148 = &local_114;
    local_140 = pFVar5;
    local_138 = lVar19;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  iVar12 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar12 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar2->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar12 + 1;
  *(uint *)(pFVar5 + (longlong)iVar12 * 4) = local_114;
  this_02->DoubleCompositeMask =
       this_02->DoubleCompositeMask | 1 << ((byte)this_02->CompositeSize & 0x1f);
  this_02->CompositeSize = this_02->CompositeSize + 1;
  local_98.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar12 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar3 = this_00->DoubleResult[2];
  if (iVar12 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  local_98.ArrayNum = iVar12;
  pFVar15 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_98,0);
  if (this_02 != pFVar15) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  local_110 = CONCAT22(0x10,TVar3);
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_110) &&
     (lVar19 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_110 < pFVar5 + lVar19 * 4)) {
    local_130 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_128 = 4;
    local_148 = &local_110;
    local_140 = pFVar5;
    local_138 = lVar19;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  iVar12 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar12 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar2->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar12 + 1;
  *(uint *)(pFVar5 + (longlong)iVar12 * 4) = local_110;
  this_02->DoubleCompositeMask =
       this_02->DoubleCompositeMask | 1 << ((byte)this_02->CompositeSize & 0x1f);
  this_02->CompositeSize = this_02->CompositeSize + 1;
  local_88.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  TVar3 = this_00->DoubleResult[3];
  iVar12 = (this_00->PropertyRegistry).Properties.ArrayNum;
  if (iVar12 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  local_88.ArrayNum = iVar12;
  pFVar15 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_88,0);
  if (this_02 != pFVar15) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  local_10c = CONCAT22(0x18,TVar3);
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_10c) &&
     (lVar19 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_10c < pFVar5 + lVar19 * 4)) {
    local_130 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_128 = 4;
    local_148 = &local_10c;
    local_140 = pFVar5;
    local_138 = lVar19;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  iVar12 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar12 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar2->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar12 + 1;
  *(uint *)(pFVar5 + (longlong)iVar12 * 4) = local_10c;
  this_02->DoubleCompositeMask =
       this_02->DoubleCompositeMask | 1 << ((byte)this_02->CompositeSize & 0x1f);
  this_02->CompositeSize = this_02->CompositeSize + 1;
  pUVar16 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  this_02->BlenderSystemClass = pUVar16;
  this_02->CustomPropertyRegistration = local_f8;
  local_6c = 0;
  MovieScene::FPreAnimatedStateExtension::RegisterStorageInternal();
  local_38 = local_38 | 3;
  local_50[0] = local_100[0];
  local_50[1] = local_100[1];
  local_50[2] = local_100[2];
  local_50[3] = local_100[3];
  local_58 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  local_70[0] = local_100[0];
  local_70[1] = local_100[1];
  local_70[2] = local_100[2];
  local_70[3] = local_100[3];
  local_78 = &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  if ((local_38 & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  pTVar18 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_58;
  if ((local_38 & 2) == 0) {
    pTVar18 = local_58;
  }
  if ((local_38 & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  pTVar17 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_58;
  if ((local_38 & 2) == 0) {
    pTVar17 = local_58;
  }
  if (pTVar18 != pTVar17) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar6)();
      return pFVar14;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&this_02->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_58);
  if ((local_38 & 1) != 0) {
    pTVar18 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_58;
    if ((local_38 & 2) == 0) {
      pTVar18 = local_58;
    }
    local_38 = local_38 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar18->Data).Pad)->Data).Pad)(pTVar18,0);
    if ((local_38 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  MovieScene::FPropertyDefinition::SetupInitialValueProcessor(this_02);
  return local_f0;
}

// ~FMovieSceneGameplayCamerasComponentTypes @ 14d600230

void __thiscall
UE::Cameras::FMovieSceneGameplayCamerasComponentTypes::~FMovieSceneGameplayCamerasComponentTypes
          (FMovieSceneGameplayCamerasComponentTypes *this)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
  FVar1;
  
  FVar1 = (this->CustomCameraFramingZoneAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->CustomCameraFramingZoneAccessors)._padding_ =
       (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  (this->CameraFramingZone).PropertyTraits =
       (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  return;
}

// Destroy @ 14d612ee0

void __cdecl UE::Cameras::FMovieSceneGameplayCamerasComponentTypes::Destroy(void)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
  FVar1;
  TUniquePtr<UE::Cameras::FMovieSceneGameplayCamerasComponentTypes,TDefaultDelete<UE::Cameras::FMovieSceneGameplayCamerasComponentTypes>_>
  TVar2;
  
  TVar2.Ptr = GMovieSceneUMGComponentTypes.Ptr;
  if (GMovieSceneUMGComponentTypes.Ptr != (FMovieSceneGameplayCamerasComponentTypes *)0x0) {
    GMovieSceneUMGComponentTypes.Ptr = (FMovieSceneGameplayCamerasComponentTypes *)0x0;
    FVar1 = ((TVar2.Ptr)->CustomCameraFramingZoneAccessors).CustomAccessors.AllocatorInstance.
            SecondaryData;
    if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar1);
    }
    ((TVar2.Ptr)->CustomCameraFramingZoneAccessors)._padding_ =
         (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
    ((TVar2.Ptr)->CameraFramingZone).PropertyTraits =
         (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    ::operator_delete(TVar2.Ptr,0x60);
  }
  GMovieSceneUMGComponentTypesDestroyed = true;
  return;
}

// Get @ 14d617f20

FMovieSceneGameplayCamerasComponentTypes * __cdecl
UE::Cameras::FMovieSceneGameplayCamerasComponentTypes::Get(void)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
  FVar1;
  code *pcVar2;
  TUniquePtr<UE::Cameras::FMovieSceneGameplayCamerasComponentTypes,TDefaultDelete<UE::Cameras::FMovieSceneGameplayCamerasComponentTypes>_>
  TVar3;
  bool bVar4;
  FMovieSceneGameplayCamerasComponentTypes *pFVar5;
  FMovieSceneGameplayCamerasComponentTypes *this;
  TUniquePtr<UE::Cameras::FMovieSceneGameplayCamerasComponentTypes,TDefaultDelete<UE::Cameras::FMovieSceneGameplayCamerasComponentTypes>_>
  TVar6;
  
  TVar6.Ptr = GMovieSceneUMGComponentTypes.Ptr;
  if (GMovieSceneUMGComponentTypes.Ptr == (FMovieSceneGameplayCamerasComponentTypes *)0x0) {
    if ((GMovieSceneUMGComponentTypesDestroyed) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GMovieSceneUMGComponentTypesDestroyed",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\MovieScene\\MovieSceneGameplayCamerasComponentTypes.cpp"
                           ,0x45,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMovieSceneGameplayCamerasComponentTypes *)(*pcVar2)();
      return pFVar5;
    }
    this = ::operator_new(0x60);
    pFVar5 = (FMovieSceneGameplayCamerasComponentTypes *)0x0;
    if (this != (FMovieSceneGameplayCamerasComponentTypes *)0x0) {
      pFVar5 = FMovieSceneGameplayCamerasComponentTypes(this);
    }
    TVar3.Ptr = GMovieSceneUMGComponentTypes.Ptr;
    TVar6.Ptr = GMovieSceneUMGComponentTypes.Ptr;
    if ((GMovieSceneUMGComponentTypes.Ptr != pFVar5) &&
       (TVar6.Ptr = pFVar5,
       GMovieSceneUMGComponentTypes.Ptr != (FMovieSceneGameplayCamerasComponentTypes *)0x0)) {
      FVar1 = ((GMovieSceneUMGComponentTypes.Ptr)->CustomCameraFramingZoneAccessors).CustomAccessors
              .AllocatorInstance.SecondaryData;
      GMovieSceneUMGComponentTypes.Ptr = pFVar5;
      if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
                    )0x0) {
        FMemory::Free((void *)FVar1);
      }
      ((TVar3.Ptr)->CustomCameraFramingZoneAccessors)._padding_ =
           (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
      ((TVar3.Ptr)->CameraFramingZone).PropertyTraits =
           (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>)
           &___7IPropertyTraits_MovieScene_UE__6B_;
      ::operator_delete(TVar3.Ptr,0x60);
      return GMovieSceneUMGComponentTypes.Ptr;
    }
  }
  GMovieSceneUMGComponentTypes.Ptr = TVar6.Ptr;
  return TVar6.Ptr;
}

