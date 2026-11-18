// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// StaticClass @ 146066fe0

UClass * __cdecl UMovieSceneBlenderSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBlenderSystem",
               &Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneBlenderSystem,0x70,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBlenderSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton;
}

// UMovieSceneBlenderSystem @ 146094ab0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneBlenderSystem * __thiscall
UMovieSceneBlenderSystem::UMovieSceneBlenderSystem
          (UMovieSceneBlenderSystem *this,FObjectInitializer *param_1)

{
  FMovieSceneBlenderSystemID *pFVar1;
  uchar uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  FComponentTypeID FVar7;
  UClass *pUVar8;
  FComponentRegistry *this_00;
  undefined6 extraout_var;
  UMovieSceneBlenderSystem *pUVar9;
  EComponentTypeFlags EVar10;
  wchar_t local_res8 [8];
  TPairInitializer<FMovieSceneBlenderSystemID_const_&,TSubclassOf<UMovieSceneBlenderSystem>_&&>
  local_res18;
  FName local_48;
  FString local_40;
  FMovieSceneBlenderSystemID *local_30;
  TSubclassOf<UMovieSceneBlenderSystem> **local_28;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneBlenderSystem__6B_;
  pFVar1 = &this->SystemID;
  (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
  ;
  (this->AllocatedBlendChannels).NumBits = 0;
  *(undefined8 *)&(this->AllocatedBlendChannels).MaxBits = 0x80;
  pFVar1->Value = 0xff;
  (this->BlenderTypeTag).Value = 0xffff;
  *(undefined4 *)&this->_padding_ = 8;
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    pUVar8 = (UClass *)this->_padding_;
    if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar8);
    }
    pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar8 = GetPrivateStaticClass();
    iVar3 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UMovieSceneBlenderSystem *)(*pcVar5)();
        return pUVar9;
      }
    }
    uVar2 = pUVar4[2].field_0x1c;
    pFVar1->Value = uVar2;
    (this->BlenderTypeTag).Value = *(ushort *)&pUVar4[2].field_0x1e;
    if (uVar2 == FMovieSceneBlenderSystemID::Invalid.Value) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemID.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneBlenderSystem.cpp"
                         ,0x37,L"Blender system wasn\'t registered correctly on init!");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UMovieSceneBlenderSystem *)(*pcVar5)();
        return pUVar9;
      }
    }
  }
  else {
    pUVar8 = GetPrivateStaticClass();
    local_res18.Value = (TSubclassOf<UMovieSceneBlenderSystem> *)this->_padding_;
    if ((UClass *)local_res18.Value != pUVar8) {
      pFVar1->Value =
           UE::MovieScene::GBlenderSystemRegistry._8_1_ -
           UE::MovieScene::GBlenderSystemRegistry._52_1_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)local_res18.Value != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18.Value);
      }
      local_28 = &local_res18.Value;
      local_30 = pFVar1;
      TSet<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FMovieSceneBlenderSystemID_const_&,TSubclassOf<UMovieSceneBlenderSystem>_&&>_>
                ((TSet<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>,0>,FDefaultSetAllocator>
                  *)&UE::MovieScene::GBlenderSystemRegistry,&local_res18,(bool *)&local_30);
      this_00 = UMovieSceneEntitySystemLinker::GetComponents();
      local_48 = (FName)this->_padding_;
      ::FName::ToString(&local_48,&local_40);
      EVar10 = 0x6c;
      if (local_40.Data.ArrayNum != 0) {
        EVar10 = (EComponentTypeFlags)local_40.Data.AllocatorInstance.Data;
      }
      FVar7 = UE::MovieScene::FComponentRegistry::NewTag(this_00,local_res8,EVar10);
      (this->BlenderTypeTag).Value = *(ushort *)CONCAT62(extraout_var,FVar7.Value);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        return this;
      }
    }
  }
  return this;
}

// UMovieSceneBlenderSystem @ 146094c80

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneBlenderSystem * __thiscall
UMovieSceneBlenderSystem::UMovieSceneBlenderSystem
          (UMovieSceneBlenderSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneBlenderSystem__6B_;
  (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
  ;
  (this->AllocatedBlendChannels).NumBits = 0;
  (this->AllocatedBlendChannels).MaxBits = 0x80;
  (this->SystemID).Value = 0xff;
  (this->BlenderTypeTag).Value = 0xffff;
  return this;
}

// ~UMovieSceneBlenderSystem @ 146098280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneBlenderSystem::~UMovieSceneBlenderSystem(UMovieSceneBlenderSystem *this)

{
  ForElementType<unsigned_int> FVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneBlenderSystem__6B_;
  FVar1 = (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// AllocateBlendChannel @ 1460a9fe0

FMovieSceneBlendChannelID __thiscall
UMovieSceneBlenderSystem::AllocateBlendChannel(UMovieSceneBlenderSystem *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneBlendChannelID FVar5;
  uchar *in_RDX;
  ForElementType<unsigned_int> FVar6;
  
  this_00 = &this->AllocatedBlendChannels;
  iVar4 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                    (this_00,false,0,(this->AllocatedBlendChannels).NumBits);
  if (iVar4 == -1) {
    iVar4 = TBitArray<FDefaultBitArrayAllocator>::Add(this_00,true);
  }
  else {
    if ((iVar4 < 0) || ((this->AllocatedBlendChannels).NumBits <= iVar4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FMovieSceneBlendChannelID)(*pcVar2)();
        return FVar5;
      }
    }
    FVar6 = (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)this_00;
    }
    puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4)
    ;
    *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
  }
  if (0xfffe < iVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewBlendChannel < TNumericLimits<uint16>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneBlenderSystem.cpp"
                       ,0x48,
                       L"Maximum number of active blends reached - this indicates either a leak, or more than 65535 blend channels are genuinely required"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FMovieSceneBlendChannelID)(*pcVar2)();
      return FVar5;
    }
  }
  *in_RDX = (this->SystemID).Value;
  *(short *)(in_RDX + 2) = (short)iVar4;
  return SUB84(in_RDX,0);
}

// CompactBlendChannels @ 1460b1c20

void __thiscall UMovieSceneBlenderSystem::CompactBlendChannels(UMovieSceneBlenderSystem *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  ulonglong uVar10;
  
  iVar7 = (this->AllocatedBlendChannels).NumBits;
  this_00 = &this->AllocatedBlendChannels;
  if (iVar7 != 0) {
    uVar12 = 0xffffffff >> (-(char)iVar7 & 0x1fU);
    FVar8 = (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)this_00;
    }
    uVar9 = iVar7 + 0x1fU >> 5;
    uVar10 = (ulonglong)uVar9;
    do {
      if (uVar9 == 0) goto LAB_1460b1c6f;
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar9;
      uVar13 = uVar12 & *(uint *)((longlong)FVar8 + uVar10 * 4);
      uVar12 = 0xffffffff;
    } while (uVar13 == 0);
    uVar10 = (ulonglong)uVar13 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar14 = (int)lVar4 + -1 + uVar9 * 0x20;
    if (iVar14 != -1) {
      iVar3 = (this->AllocatedBlendChannels).NumBits;
      if (iVar3 + -1 <= iVar14) {
        return;
      }
      iVar11 = (iVar3 - iVar14) + -1;
      iVar14 = iVar14 + 1;
      if ((((iVar14 < 0) || (iVar11 < 0)) || (iVar7 < iVar3)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3ee,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->AllocatedBlendChannels).NumBits;
      if (iVar3 != iVar7) {
        FVar8 = (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<unsigned_int>)this_00;
        if (FVar8 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = FVar8;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  ((uint *)FVar15,iVar14,(uint *)FVar15,iVar3,(iVar7 - iVar14) - iVar11);
      }
      piVar1 = &(this->AllocatedBlendChannels).NumBits;
      *piVar1 = *piVar1 - iVar11;
      iVar7 = (this->AllocatedBlendChannels).NumBits;
      uVar9 = iVar7 >> 0x1f & 0x1f;
      uVar12 = iVar7 + uVar9;
      iVar7 = (uVar12 & 0x1f) - uVar9;
      if (iVar7 != 0) {
        FVar8 = (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)this_00;
        }
        puVar2 = (uint *)((longlong)FVar8 + (longlong)((int)uVar12 >> 5) * 4);
        *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
      return;
    }
  }
LAB_1460b1c6f:
  (this->AllocatedBlendChannels).NumBits = 0;
  iVar7 = (this->AllocatedBlendChannels).MaxBits;
  if ((-1 < iVar7) && (iVar7 < 0x81)) {
    return;
  }
  (this->AllocatedBlendChannels).MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  return;
}

// GetBlenderSystemClass @ 1460c9270

TSubclassOf<UMovieSceneBlenderSystem> __cdecl
UMovieSceneBlenderSystem::GetBlenderSystemClass(FMovieSceneBlenderSystemID param_1)

{
  int iVar1;
  undefined7 in_register_00000009;
  TObjectPtr<UClass> TVar2;
  UObject *pUVar3;
  byte in_DL;
  UObject *pUVar4;
  longlong lVar5;
  
  TVar2.field0_0x0._1_7_ = in_register_00000009;
  TVar2.field0_0x0._0_1_ = param_1.Value;
  pUVar4 = (UObject *)0x0;
  if (UE::MovieScene::GBlenderSystemRegistry._8_4_ != UE::MovieScene::GBlenderSystemRegistry._52_4_)
  {
    lVar5 = 0x154beff68;
    if (UE::MovieScene::GBlenderSystemRegistry._64_8_ != 0) {
      lVar5 = UE::MovieScene::GBlenderSystemRegistry._64_8_;
    }
    iVar1 = *(int *)(lVar5 + ((ulonglong)(UE::MovieScene::GBlenderSystemRegistry._72_4_ - 1) &
                             (ulonglong)in_DL) * 4);
    while (iVar1 != -1) {
      lVar5 = UE::MovieScene::GBlenderSystemRegistry._0_8_ + (longlong)iVar1 * 0x18;
      if (*(byte *)(UE::MovieScene::GBlenderSystemRegistry._0_8_ + (longlong)iVar1 * 0x18) == in_DL)
      {
        pUVar3 = (UObject *)(lVar5 + 8);
        if (lVar5 == 0) {
          pUVar3 = pUVar4;
        }
        pUVar4 = (UObject *)0x0;
        if (((pUVar3 != (UObject *)0x0) &&
            (pUVar4 = *(UObject **)pUVar3, UE::GC::GIsIncrementalReachabilityPending)) &&
           (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        break;
      }
      iVar1 = *(int *)(lVar5 + 0x10);
    }
  }
  *(UObject **)TVar2.field0_0x0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  return (TSubclassOf<UMovieSceneBlenderSystem>)TVar2.field0_0x0;
}

// GetBlenderSystemID @ 1460c9330

FMovieSceneBlenderSystemID __thiscall
UMovieSceneBlenderSystem::GetBlenderSystemID(UMovieSceneBlenderSystem *this)

{
  uchar *in_RDX;
  
  *in_RDX = (this->SystemID).Value;
  return (FMovieSceneBlenderSystemID)(uchar)in_RDX;
}

// GetPrivateStaticClass @ 1460cf250

UClass * __cdecl UMovieSceneBlenderSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBlenderSystem",
               &Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneBlenderSystem,0x70,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBlenderSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton;
}

// IsRelevantImpl @ 1460d9270

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneBlenderSystem::IsRelevantImpl
          (UMovieSceneBlenderSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  int iVar1;
  
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                    (&this->AllocatedBlendChannels,true,0,(this->AllocatedBlendChannels).NumBits);
  return iVar1 != -1;
}

// ReleaseBlendChannel @ 1460e36c0

void __thiscall
UMovieSceneBlenderSystem::ReleaseBlendChannel
          (UMovieSceneBlenderSystem *this,FMovieSceneBlendChannelID param_1)

{
  uint *puVar1;
  code *pcVar2;
  FMovieSceneBlendChannelID FVar3;
  ushort uVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  undefined1 local_res8 [8];
  FMovieSceneBlendChannelID local_res10;
  
  local_res10 = param_1;
  if (param_1.SystemID.Value.Value != (this->SystemID).Value) {
    local_res8[0] = 0;
    `UMovieSceneBlenderSystem::ReleaseBlendChannel'::__l2::<lambda_1>::operator()(local_res8);
  }
  FVar3 = local_res10;
  uVar4 = local_res10.ChannelID;
  if ((this->AllocatedBlendChannels).NumBits <= (int)(uint)local_res10.ChannelID) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)&this->AllocatedBlendChannels;
  }
  puVar1 = (uint *)((longlong)FVar6 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)FVar3.ChannelID & 0x1f));
  return;
}

// StaticRegisterNativesUMovieSceneBlenderSystem @ 1460fa1c0

void __cdecl UMovieSceneBlenderSystem::StaticRegisterNativesUMovieSceneBlenderSystem(void)

{
  return;
}

// operator() @ 1504e2ac0

bool __thiscall
`UMovieSceneBlenderSystem::ReleaseBlendChannel'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1093276984529649743>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1093276984529649743>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

