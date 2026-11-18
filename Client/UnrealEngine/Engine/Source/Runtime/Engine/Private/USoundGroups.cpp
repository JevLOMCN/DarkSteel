// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14867a600

UClass * __cdecl USoundGroups::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundGroups.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundGroups",
               &Z_Registration_Info_UClass_USoundGroups.InnerSingleton,
               StaticRegisterNativesUSoundGroups,0x88,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundGroups>,
               InternalVTableHelperCtorCaller<USoundGroups>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundGroups.InnerSingleton;
}

// USoundGroups @ 148696ed0

USoundGroups * __thiscall USoundGroups::USoundGroups(USoundGroups *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundGroups__6B_;
  (this->SoundGroupProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundGroupProfiles).ArrayNum = 0;
  (this->SoundGroupProfiles).ArrayMax = 0;
  *(undefined8 *)&this->SoundGroupMap = 0;
  *(undefined8 *)&(this->SoundGroupMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundGroupMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundGroupMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundGroupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundGroupMap).field_0x34 = 0;
  *(undefined4 *)&(this->SoundGroupMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SoundGroupMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundGroupMap).field_0x48 = 0;
  return this;
}

// USoundGroups @ 148696f30

USoundGroups * __thiscall USoundGroups::USoundGroups(USoundGroups *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundGroups__6B_;
  (this->SoundGroupProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundGroupProfiles).ArrayNum = 0;
  (this->SoundGroupProfiles).ArrayMax = 0;
  *(undefined8 *)&this->SoundGroupMap = 0;
  *(undefined8 *)&(this->SoundGroupMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundGroupMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundGroupMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundGroupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundGroupMap).field_0x34 = 0;
  *(undefined4 *)&(this->SoundGroupMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SoundGroupMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundGroupMap).field_0x48 = 0;
  return this;
}

// ~USoundGroups @ 14869b680

void __thiscall USoundGroups::~USoundGroups(USoundGroups *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USoundGroups__6B_;
  *(undefined4 *)&(this->SoundGroupMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SoundGroupMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESoundGroup,FSoundGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESoundGroup,FSoundGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SoundGroupMap);
  DestructItems<FSoundGroup,int>
            ((FSoundGroup *)(this->SoundGroupProfiles).AllocatorInstance.Data,
             (this->SoundGroupProfiles).ArrayNum);
  pFVar2 = (this->SoundGroupProfiles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c44e0

UClass * __cdecl USoundGroups::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundGroups.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundGroups",
               &Z_Registration_Info_UClass_USoundGroups.InnerSingleton,
               StaticRegisterNativesUSoundGroups,0x88,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundGroups>,
               InternalVTableHelperCtorCaller<USoundGroups>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundGroups.InnerSingleton;
}

// GetSoundGroup @ 1486c7e30

/* WARNING: Enum "Type": Some values do not have unique names */

FSoundGroup * __thiscall USoundGroups::GetSoundGroup(USoundGroups *this,ESoundGroup param_1)

{
  code *pcVar1;
  bool bVar2;
  ESoundGroup EVar3;
  ESoundGroup *pEVar4;
  UClass *pUVar5;
  UEnum *this_00;
  FText *this_01;
  int *piVar6;
  FSoundGroup *pFVar7;
  int iVar8;
  undefined1 *puVar9;
  FSoundGroup *pFVar10;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  FText local_18;
  
  if (*(int *)&(this->SoundGroupMap).field_0x8 == *(int *)&(this->SoundGroupMap).field_0x34) {
    Initialize(this);
  }
  pFVar7 = (FSoundGroup *)0x0;
  if (*(int *)&(this->SoundGroupMap).field_0x8 != *(int *)&(this->SoundGroupMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SoundGroupMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SoundGroupMap).field_0x38;
    }
    EVar3 = *(ESoundGroup *)
             (puVar9 + (ulonglong)
                       (*(int *)&(this->SoundGroupMap).field_0x48 - SOUNDGROUP_Effects & param_1) *
                       4);
    if (EVar3 != ~SOUNDGROUP_Default) {
      do {
        pEVar4 = (ESoundGroup *)((longlong)(int)EVar3 * 0x30 + *(longlong *)&this->SoundGroupMap);
        if (*pEVar4 == param_1) {
          pFVar10 = (FSoundGroup *)(pEVar4 + 2);
          if (pEVar4 == (ESoundGroup *)0x0) {
            pFVar10 = pFVar7;
          }
          if (pFVar10 != (FSoundGroup *)0x0) {
            return pFVar10;
          }
          break;
        }
        EVar3 = pEVar4[10];
      } while (EVar3 != ~SOUNDGROUP_Default);
    }
  }
  pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
  local_28._12_4_ = uStack_2c;
  local_28.Size = 0x1a;
  local_28.DataPtr = L"/Script/Engine.ESoundGroup";
  this_00 = (UEnum *)StaticFindObjectChecked(pUVar5,(UObject *)0x0,&local_28,None);
  if (2 < (byte)LogAudio._0_1_) {
    this_01 = UEnum::GetDisplayNameTextByValue(this_00,&local_18,(longlong)(int)param_1);
    FText::ToString(this_01);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  pFVar10 = pFVar7;
  if (*(int *)&(this->SoundGroupMap).field_0x8 != *(int *)&(this->SoundGroupMap).field_0x34) {
    piVar6 = *(int **)&(this->SoundGroupMap).field_0x40;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)&(this->SoundGroupMap).field_0x38;
    }
    iVar8 = *piVar6;
    if (iVar8 != -1) {
      do {
        pFVar10 = (FSoundGroup *)((longlong)iVar8 * 0x30 + *(longlong *)&this->SoundGroupMap);
        if (*(int *)pFVar10 == 0) {
          if (pFVar10 != (FSoundGroup *)0x0) goto LAB_1486c7fc3;
          break;
        }
        iVar8 = *(int *)&pFVar10[1].DisplayName.Data.AllocatorInstance.Data;
        pFVar10 = pFVar7;
      } while (iVar8 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FSoundGroup *)(*pcVar1)();
    return pFVar7;
  }
LAB_1486c7fc3:
  return (FSoundGroup *)&pFVar10->DisplayName;
}

// Initialize @ 1486cfb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundGroups::Initialize(USoundGroups *this)

{
  TMap<ESoundGroup,FSoundGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESoundGroup,FSoundGroup,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  ESoundGroup local_res8 [2];
  ESoundGroup local_res10 [2];
  FSoundGroup local_48;
  
  piVar9 = (int *)0x0;
  this_00 = &this->SoundGroupMap;
  piVar7 = piVar9;
  piVar5 = piVar9;
  if (0 < (this->SoundGroupProfiles).ArrayNum) {
    do {
      uVar8 = (uint)piVar7;
      uVar4 = 0;
      if ((int)uVar8 < (this->SoundGroupProfiles).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->SoundGroupProfiles).AllocatorInstance.Data;
      uVar4 = 0;
      if ((int)uVar8 < (this->SoundGroupProfiles).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res8[0] =
           (ESoundGroup)
           (byte)*(FScriptContainerElement *)
                  ((longlong)piVar5 + (longlong)(this->SoundGroupProfiles).AllocatorInstance.Data);
      TMapBase<enum_ESoundGroup,FSoundGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>_>
      ::Emplace<enum_ESoundGroup,FSoundGroup_const_&>
                (this_00,local_res8,(FSoundGroup *)(pFVar1 + (longlong)(int)uVar8 * 0x20));
      piVar7 = (int *)(ulonglong)(uVar8 + 1);
      piVar5 = piVar5 + 8;
    } while ((int)(uVar8 + 1) < (this->SoundGroupProfiles).ArrayNum);
  }
  if (*(int *)&(this->SoundGroupMap).field_0x8 != *(int *)&(this->SoundGroupMap).field_0x34) {
    piVar7 = *(int **)&(this->SoundGroupMap).field_0x40;
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)&(this->SoundGroupMap).field_0x38;
    }
    iVar6 = *piVar7;
    if (iVar6 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar6 * 0x30 + *(longlong *)this_00);
        if (*piVar7 == 0) {
          piVar5 = piVar7 + 2;
          if (piVar7 == (int *)0x0) {
            piVar5 = piVar9;
          }
          if (piVar5 != (int *)0x0) {
            return;
          }
          break;
        }
        iVar6 = piVar7[10];
      } while (iVar6 != -1);
    }
  }
  if (2 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  local_48.bAlwaysDecompressOnLoad = 0;
  local_48.SoundGroup.Value = '\0';
  local_48.DisplayName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.DisplayName.Data.ArrayNum = 0;
  local_48.DisplayName.Data.ArrayMax = 0;
  local_48.DecompressedDuration = 0.0;
  local_res10[0] = SOUNDGROUP_Default;
  TMapBase<enum_ESoundGroup,FSoundGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>_>
  ::Emplace<enum_ESoundGroup,FSoundGroup>(this_00,local_res10,&local_48);
  if (local_48.DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DisplayName.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUSoundGroups @ 1486f1890

void __cdecl USoundGroups::StaticRegisterNativesUSoundGroups(void)

{
  return;
}

