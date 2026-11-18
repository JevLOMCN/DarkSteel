// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 5

// StaticStruct @ 146f82d40

UScriptStruct * __cdecl FRecastGraphWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecastGraphWrapper.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FRecastGraphWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecastGraphWrapper,(UObject *)pUVar1,
                         L"RecastGraphWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FRecastGraphWrapper.OuterSingleton;
}

// BindFilter @ 146f9bea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRecastGraphWrapper::BindFilter(FRecastGraphWrapper *this,FRecastGraphAStarFilter *param_1)

{
  this->CachedNextLink = 0xffffffff;
  dtNavMeshQuery::init
            (&this->RecastQuery,this->DetourNavMesh,0,
             (dtQuerySpecialLinkFilter *)&param_1->LinkFilter);
  return;
}

// ConvertToRecastStatus @ 146f9e9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
FRecastGraphWrapper::ConvertToRecastStatus
          (FRecastGraphWrapper *this,FRecastAStar *param_1,FRecastGraphAStarFilter *param_2,
          EGraphAStarResult param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x40000000;
  if (param_3 == SearchFail) {
    uVar1 = 0x80000000;
  }
  else if (param_3 != SearchSuccess) {
    if (param_3 == GoalUnreachable) {
      uVar1 = 0x40000060;
      if (*(uint *)&param_1->field_0x10 < param_2->MaxSearchNodes) {
        uVar1 = 0x40000040;
      }
      return uVar1;
    }
    if (param_3 == InfiniteLoop) {
      uVar1 = 0x800000a0;
      if (*(uint *)&param_1->field_0x10 < param_2->MaxSearchNodes) {
        uVar1 = 0x80000080;
      }
      return uVar1;
    }
  }
  uVar2 = uVar1 | 0x20;
  if (*(uint *)&param_1->field_0x10 < param_2->MaxSearchNodes) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// GetNeighbour @ 146fb2d70

FRecastNeighbour * __thiscall
FRecastGraphWrapper::GetNeighbour
          (FRecastGraphWrapper *this,FRecastNeighbour *__return_storage_ptr__,
          FRecastAStarSearchNode *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  dtMeshTile *pdVar3;
  dtLink *pdVar4;
  uint uVar5;
  
  puVar1 = &this->CachedNextLink;
  if (param_2 == 0) {
    *puVar1 = param_1->Poly->firstLink;
  }
  uVar2 = *puVar1;
  if (uVar2 == 0xffffffff) {
    __return_storage_ptr__->NodeRef = 0;
    __return_storage_ptr__->Side = '\0';
    return __return_storage_ptr__;
  }
  pdVar3 = param_1->Tile;
  uVar5 = (uint)pdVar3->header->maxLinkCount;
  if (uVar2 < uVar5) {
    pdVar4 = pdVar3->links + uVar2;
  }
  else {
    pdVar4 = (pdVar3->dynamicLinksO).m_data + (int)(uVar2 - uVar5);
  }
  *puVar1 = pdVar4->next;
  __return_storage_ptr__->NodeRef = pdVar4->ref;
  __return_storage_ptr__->Side = pdVar4->side;
  return __return_storage_ptr__;
}

// Initialize @ 146fb88f0

void __thiscall FRecastGraphWrapper::Initialize(FRecastGraphWrapper *this,ARecastNavMesh *param_1)

{
  dtNavMesh *pdVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ARecastNavMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->RecastNavMeshActor).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->RecastNavMeshActor).field0_0x0.DebugPtr = param_1;
    if (param_1 == (ARecastNavMesh *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecastNavMeshActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\RecastGraphAStar.cpp"
                         ,0x11,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (((this->RecastNavMeshActor).field0_0x0.DebugPtr)->RecastNavMeshImpl ==
      (FPImplRecastNavMesh *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecastNavMeshActor->GetRecastNavMeshImpl()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\RecastGraphAStar.cpp"
                       ,0x12,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pdVar1 = ((this->RecastNavMeshActor).field0_0x0.DebugPtr)->RecastNavMeshImpl->DetourNavMesh;
  this->DetourNavMesh = pdVar1;
  if (pdVar1 == (dtNavMesh *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DetourNavMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\RecastGraphAStar.cpp"
                       ,0x14,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

