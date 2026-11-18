// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FODSCMessageHandler @ 148089750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FODSCMessageHandler * __thiscall
FODSCMessageHandler::FODSCMessageHandler
          (FODSCMessageHandler *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2,EShaderPlatform param_3,Type param_4,Type param_5,
          ODSCRecompileCommand param_6,FShaderCompilerFlags *param_7)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->MaterialsToLoad;
  this->RequestStartTime = 0.0;
  this->_padding_ = (longlong)&___7FODSCMessageHandler__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MaterialsToLoad).ArrayMax;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->MaterialsToLoad).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  ::FString::FString(&this->ShaderTypesToLoad,param_2);
  this->FeatureLevel = param_4;
  this->QualityLevel = param_5;
  this->RecompileCommandType = param_6;
  this->ShaderPlatform = param_3;
  (this->ExtraCompilerFlags).Data = param_7->Data;
  (this->RequestBatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestBatch).ArrayNum = 0;
  (this->RequestBatch).ArrayMax = 0;
  (this->OutMeshMaterialMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutMeshMaterialMaps).ArrayNum = 0;
  (this->OutMeshMaterialMaps).ArrayMax = 0;
  (this->OutGlobalShaderMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutGlobalShaderMap).ArrayNum = 0;
  (this->OutGlobalShaderMap).ArrayMax = 0;
  return this;
}

// FODSCMessageHandler @ 148089860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FODSCMessageHandler * __thiscall
FODSCMessageHandler::FODSCMessageHandler
          (FODSCMessageHandler *this,EShaderPlatform param_1,Type param_2,Type param_3,
          ODSCRecompileCommand param_4)

{
  this->ShaderPlatform = param_1;
  this->RequestStartTime = 0.0;
  this->_padding_ = (longlong)&___7FODSCMessageHandler__6B_;
  this->RecompileCommandType = param_4;
  (this->MaterialsToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialsToLoad).ArrayNum = 0;
  (this->MaterialsToLoad).ArrayMax = 0;
  (this->ShaderTypesToLoad).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderTypesToLoad).Data.ArrayNum = 0;
  (this->ShaderTypesToLoad).Data.ArrayMax = 0;
  this->FeatureLevel = param_2;
  this->QualityLevel = param_3;
  (this->ExtraCompilerFlags).Data = 0;
  (this->RequestBatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestBatch).ArrayNum = 0;
  (this->RequestBatch).ArrayMax = 0;
  (this->OutMeshMaterialMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutMeshMaterialMaps).ArrayNum = 0;
  (this->OutMeshMaterialMaps).ArrayMax = 0;
  (this->OutGlobalShaderMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutGlobalShaderMap).ArrayNum = 0;
  (this->OutGlobalShaderMap).ArrayMax = 0;
  return this;
}

// AddPayload @ 148093ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FODSCMessageHandler::AddPayload(FODSCMessageHandler *this,FODSCRequestPayload *param_1)

{
  TArray<FODSCRequestPayload,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FODSCRequestPayload *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->RequestBatch;
  pFVar3 = (FODSCRequestPayload *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->RequestBatch).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->RequestBatch).ArrayNum;
  piVar2 = &(this->RequestBatch).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->RequestBatch).ArrayNum = iVar6 + 1;
  FODSCRequestPayload::FODSCRequestPayload
            ((FODSCRequestPayload *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x68),
             param_1);
  return;
}

// FillPayload @ 1480a1170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCMessageHandler::FillPayload(FODSCMessageHandler *this,FArchive *param_1)

{
  FShaderCompilerFlags *pFVar1;
  ODSCRecompileCommand *pOVar2;
  ulong64 *puVar3;
  longlong *plVar4;
  ODSCRecompileCommand *pOVar5;
  uint local_res8 [2];
  Type local_res10 [2];
  uint local_res18 [2];
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  local_res8[0] = (uint)this->ShaderPlatform;
  local_res10[0] = this->FeatureLevel;
  local_res18[0] = (uint)this->QualityLevel;
  this->RequestStartTime =
       (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_1,&this->MaterialsToLoad);
  ::operator<<(param_1,&this->ShaderTypesToLoad);
  pFVar1 = &this->ExtraCompilerFlags;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Data);
    }
  }
  else {
    pFVar1->Data = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((Type *)plVar4[1] < (Type *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(Type *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  pOVar2 = &this->RecompileCommandType;
  pOVar5 = (ODSCRecompileCommand *)**(undefined8 **)&param_1->field_0x8;
  if ((ODSCRecompileCommand *)(*(undefined8 **)&param_1->field_0x8)[1] < pOVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pOVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pOVar2);
    }
  }
  else {
    *pOVar2 = *pOVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FODSCRequestPayload,TSizedDefaultAllocator<32>_>
            (param_1,&this->RequestBatch);
  return;
}

// GetGlobalShaderMap @ 1480a4420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FODSCMessageHandler::GetGlobalShaderMap(FODSCMessageHandler *this)

{
  return &this->OutGlobalShaderMap;
}

// GetMaterialsToLoad @ 1480a60d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FODSCMessageHandler::GetMaterialsToLoad(FODSCMessageHandler *this)

{
  return &this->MaterialsToLoad;
}

// GetMeshMaterialMaps @ 1480a60e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FODSCMessageHandler::GetMeshMaterialMaps(FODSCMessageHandler *this)

{
  return &this->OutMeshMaterialMaps;
}

// ProcessResponse @ 1480bf550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FODSCMessageHandler::ProcessResponse(FODSCMessageHandler *this,FArchive *param_1)

{
  LARGE_INTEGER local_res8;
  
  if (3 < (byte)LogODSC._0_1_) {
    QueryPerformanceCounter(&local_res8);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogODSC);
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&this->OutMeshMaterialMaps);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&this->OutGlobalShaderMap);
  return;
}

// ReloadGlobalShaders @ 1480c8db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FODSCMessageHandler::ReloadGlobalShaders(FODSCMessageHandler *this)

{
  return this->RecompileCommandType == Global;
}

