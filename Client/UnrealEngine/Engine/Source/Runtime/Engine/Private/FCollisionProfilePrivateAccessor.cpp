// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AddProfileTemplate @ 1476ec830

bool __cdecl
FCollisionProfilePrivateAccessor::AddProfileTemplate(FCollisionResponseTemplate *param_1)

{
  TArray<FCollisionResponseTemplate,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UCollisionProfile *this;
  FCollisionResponseTemplate *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *this_00;
  FString local_68;
  FCollisionResponseTemplate local_58;
  
  this_00 = UCollisionProfile::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (UCollisionProfile *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (::bInitialized == false) {
    UCollisionProfile::LoadProfileConfig(this,false);
    ::bInitialized = true;
  }
  local_58.bCanModify = true;
  local_58.Name.ComparisonIndex.Value = 0;
  local_58.Name.Number = 0;
  local_58.CollisionEnabled.Value = '\0';
  local_58.ObjectType.Value = '\0';
  FCollisionResponseContainer::FCollisionResponseContainer(&local_58.ResponseToChannels);
  local_58.ObjectTypeName.ComparisonIndex.Value = 0;
  local_58.ObjectTypeName.Number = 0;
  local_58.CustomResponses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.CustomResponses.ArrayNum = 0;
  local_58.CustomResponses.ArrayMax = 0;
  pTVar1 = &this->Profiles;
  if (param_1->Name == (FName)0x0) {
LAB_1476ec8d7:
    UCollisionProfile::SaveCustomResponses(this,param_1);
    pFVar3 = (FCollisionResponseTemplate *)(pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Profiles).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar7 = (this->Profiles).ArrayNum;
    piVar2 = &(this->Profiles).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&pTVar1->AllocatorInstance,piVar2);
      (this->Profiles).ArrayNum = iVar7;
    }
    (this->Profiles).ArrayNum = iVar7 + 1;
    FCollisionResponseTemplate::FCollisionResponseTemplate
              ((FCollisionResponseTemplate *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x48),param_1);
    if (param_1->Name != (FName)0x0) {
      bVar5 = UCollisionProfile::FindProfileData(this,pTVar1,param_1->Name,&local_58);
      if (bVar5) {
        UCollisionProfile::LoadProfileConfig(this,true);
        ::FString::FString(&local_68,"");
        UObject::TryUpdateDefaultConfigFile((UObject *)this,&local_68,true);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        bVar5 = true;
        goto LAB_1476ec9d5;
      }
    }
  }
  else {
    bVar5 = UCollisionProfile::FindProfileData(this,pTVar1,param_1->Name,&local_58);
    if (!bVar5) goto LAB_1476ec8d7;
  }
  bVar5 = false;
LAB_1476ec9d5:
  if (local_58.CustomResponses.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CustomResponses.AllocatorInstance.Data);
  }
  return bVar5;
}

