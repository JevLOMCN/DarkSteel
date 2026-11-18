// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147e8e310

UClass * __cdecl ALevelStreamingVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingVolume",
               &Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton,
               StaticRegisterNativesALevelStreamingVolume,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelStreamingVolume>,
               InternalVTableHelperCtorCaller<ALevelStreamingVolume>,local_res8,AVolume::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton;
}

// ALevelStreamingVolume @ 147ea3b90

ALevelStreamingVolume * __thiscall
ALevelStreamingVolume::ALevelStreamingVolume(ALevelStreamingVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7ALevelStreamingVolume__6B_;
  (this->StreamingLevelNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingLevelNames).ArrayNum = 0;
  (this->StreamingLevelNames).ArrayMax = 0;
  return this;
}

// ALevelStreamingVolume @ 147ea3bd0

ALevelStreamingVolume * __thiscall
ALevelStreamingVolume::ALevelStreamingVolume
          (ALevelStreamingVolume *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7ALevelStreamingVolume__6B_;
  (this->StreamingLevelNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingLevelNames).ArrayNum = 0;
  (this->StreamingLevelNames).ArrayMax = 0;
  (**(code **)(*(longlong *)this->_padding_ + 0x788))
            ((longlong *)this->_padding_,UCollisionProfile::NoCollision_ProfileName,1);
  pbVar1 = (byte *)(this->_padding_ + 0x27b);
  *pbVar1 = *pbVar1 | 4;
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 | 1;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0xffa5;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0xff;
  (this->StreamingUsage).Value = '\x01';
  return this;
}

// ~ALevelStreamingVolume @ 147ea8a00

void __thiscall ALevelStreamingVolume::~ALevelStreamingVolume(ALevelStreamingVolume *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ALevelStreamingVolume__6B_;
  pFVar1 = (this->StreamingLevelNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 147ec3de0

UClass * __cdecl ALevelStreamingVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingVolume",
               &Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton,
               StaticRegisterNativesALevelStreamingVolume,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelStreamingVolume>,
               InternalVTableHelperCtorCaller<ALevelStreamingVolume>,local_res8,AVolume::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton;
}

// PostLoad @ 147ed1900

void __thiscall ALevelStreamingVolume::PostLoad(ALevelStreamingVolume *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageFileVersion FVar6;
  ForAnyElementType *pFVar7;
  ALevelStreamingVolume *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pFVar7 = (ForAnyElementType *)(lVar2 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar7->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar7->Data + (longlong)*(int *)(lVar2 + 0x1b4) * 8)) {
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
    iVar5 = *(int *)(lVar2 + 0x1b0);
    if (iVar5 == *(int *)(lVar2 + 0x1b4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,(int *)(lVar2 + 0x1b4));
    }
    *(int *)(lVar2 + 0x1b0) = iVar5 + 1;
    *(ALevelStreamingVolume **)(pFVar7->Data + (longlong)iVar5 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (ALevelStreamingVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar6 < 0x156) {
    *(byte *)((longlong)&this->_padding_ + 3) =
         -((char)this->_padding_ != '\0') & 8U | *(byte *)((longlong)&this->_padding_ + 3) & 0xf7;
  }
  if ((this->_padding_ & 0x10) != 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// StaticRegisterNativesALevelStreamingVolume @ 147edefd0

void __cdecl ALevelStreamingVolume::StaticRegisterNativesALevelStreamingVolume(void)

{
  return;
}

