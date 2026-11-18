// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// BeginUpdateTexture3D @ 1491b56e0

FUpdateTexture3DData * __thiscall
FRHICommandListImmediate::BeginUpdateTexture3D
          (FRHICommandListImmediate *this,FUpdateTexture3DData *__return_storage_ptr__,
          FRHITexture *param_1,uint param_2,FUpdateTextureRegion3D *param_3)

{
  char cVar1;
  code *pcVar2;
  FUpdateTextureRegion3D *pFVar3;
  bool bVar4;
  longlong lVar5;
  FUpdateTexture3DData *pFVar6;
  uint uVar7;
  FLLMScope local_res10 [2];
  FName local_res18;
  FName local_78;
  FMemScope local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  pFVar3 = param_3;
  if (*(uint *)(lVar5 + 0x24) < param_3->DestX + param_3->Width) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1);
    param_3 = (FUpdateTextureRegion3D *)param_1->_padding_;
    ::FName::ToString((FName *)&param_3,&local_68);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.DestX + UpdateRegion.Width <= Texture->GetSizeX()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x12dd,L"UpdateTexture3D out of bounds on X. Texture: %s, %i, %i, %i");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FUpdateTexture3DData *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (*(uint *)(lVar5 + 0x28) < pFVar3->DestY + pFVar3->Height) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1);
    local_res18 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res18,&local_58);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.DestY + UpdateRegion.Height <= Texture->GetSizeY()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x12de,L"UpdateTexture3D out of bounds on Y. Texture: %s, %i, %i, %i");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FUpdateTexture3DData *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  cVar1 = *(char *)(lVar5 + 0x32);
  if (cVar1 == '\0') {
LAB_1491b5891:
    uVar7 = 1;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar7 = (uint)*(ushort *)(lVar5 + 0x2c);
        goto LAB_1491b5896;
      }
      if (cVar1 == '\x03') goto LAB_1491b5891;
      if (cVar1 != '\x04') {
        uVar7 = 0;
        goto LAB_1491b5896;
      }
    }
    uVar7 = (uint)*(ushort *)(lVar5 + 0x2e);
  }
LAB_1491b5896:
  if (uVar7 < pFVar3->DestZ + pFVar3->Depth) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1);
    local_78 = (FName)param_1->_padding_;
    ::FName::ToString(&local_78,&local_48);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.DestZ + UpdateRegion.Depth <= Texture->GetSizeZ()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x12df,L"UpdateTexture3D out of bounds on Z. Texture: %s, %i, %i, %i");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FUpdateTexture3DData *)(*pcVar2)();
      return pFVar6;
    }
  }
  FLLMScope::FLLMScope(local_res10,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_70,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x408))
            (GDynamicRHI,__return_storage_ptr__,this,param_1,param_2,pFVar3);
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

