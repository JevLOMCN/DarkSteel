// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14899a3c0

UClass * __cdecl UVirtualTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTexture",
               &Z_Registration_Info_UClass_UVirtualTexture.InnerSingleton,
               StaticRegisterNativesUVirtualTexture,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVirtualTexture>,InternalVTableHelperCtorCaller<UVirtualTexture>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTexture.InnerSingleton;
}

// UVirtualTexture @ 1489b7050

UVirtualTexture * __thiscall
UVirtualTexture::UVirtualTexture(UVirtualTexture *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVirtualTexture__6B_;
  return this;
}

// UVirtualTexture @ 1489b7080

UVirtualTexture * __thiscall
UVirtualTexture::UVirtualTexture(UVirtualTexture *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVirtualTexture__6B_;
  return this;
}

// ~UVirtualTexture @ 1489ba9d0

void __thiscall UVirtualTexture::~UVirtualTexture(UVirtualTexture *this)

{
  *(undefined ***)this = &___7UVirtualTexture__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1489ebe90

UClass * __cdecl UVirtualTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTexture",
               &Z_Registration_Info_UClass_UVirtualTexture.InnerSingleton,
               StaticRegisterNativesUVirtualTexture,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVirtualTexture>,InternalVTableHelperCtorCaller<UVirtualTexture>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTexture.InnerSingleton;
}

// Serialize @ 148a13390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UVirtualTexture::Serialize(UVirtualTexture *this,FArchive *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStackY_1e8 [32];
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0 [2];
  FString local_198;
  FAllocation local_188;
  undefined5 local_180;
  undefined4 uStack_17b;
  undefined1 uStack_177;
  undefined6 uStack_176;
  uchar local_170 [8];
  uchar local_168 [32];
  int local_148;
  undefined4 local_144;
  TArray<TArray<_anonymous_namespace_::FLegacyTileInfo,TSizedDefaultAllocator<32>_>,TFixedAllocator<16>_>
  local_140;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FVirtualTextureBuiltDataCustomVersion::Key);
  iVar4 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FVirtualTextureBuiltDataCustomVersion::Key);
  UObject::Serialize((UObject *)this,param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  iVar7 = 0;
  local_1b4 = 0;
  local_1a4 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1b4);
    }
  }
  else {
    local_1b4 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x2a;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1a4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1a4);
    }
  }
  else {
    local_1a4 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_1a0[0] = 0;
  local_1b0 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_1a0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_1a0);
    }
  }
  else {
    local_1a0[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1b0);
    }
  }
  else {
    local_1b0 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_1b8 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1b8);
    }
  }
  else {
    local_1b8 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0x10;
  TArrayPrivateFriend::
  Serialize<TArray<_anonymous_namespace_::FLegacyTileInfo,TSizedDefaultAllocator<32>_>,TFixedAllocator<16>_>
            (param_1,&local_140);
  DestructItems<TArray<_anonymous_namespace_::FLegacyTileInfo,TSizedDefaultAllocator<32>_>,int>
            ((TArray<_anonymous_namespace_::FLegacyTileInfo,TSizedDefaultAllocator<32>_> *)
             &local_140,local_140.ArrayNum);
  if (1 < iVar4) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_1b8 = 0;
    local_1b0 = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1b8);
      }
    }
    else {
      local_1b8 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1b0);
      }
    }
    else {
      local_1b0 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_1ac = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1ac,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1ac);
    }
  }
  else {
    local_1ac = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (((param_1->field_0x28 & 1) != 0) && (iVar6 = iVar7, 0 < (int)local_1ac)) {
    do {
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Data.ArrayNum = 0;
      local_198.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_198);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_1ac);
  }
  if ((0 < iVar4) && (iVar4 < 5)) {
    local_148 = 0;
    local_144 = 4;
    TArrayPrivateFriend::
    Serialize<TArray<_anonymous_namespace_::FLegacyMipTail,TSizedDefaultAllocator<32>_>,TFixedAllocator<4>_>
              (param_1,(TArray<TArray<_anonymous_namespace_::FLegacyMipTail,TSizedDefaultAllocator<32>_>,TFixedAllocator<4>_>
                        *)&local_188);
    DestructItems<TArray<_anonymous_namespace_::FLegacyMipTail,TSizedDefaultAllocator<32>_>,int>
              ((TArray<_anonymous_namespace_::FLegacyMipTail,TSizedDefaultAllocator<32>_> *)
               &local_188,local_148);
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_1a8 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1a8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1a8);
    }
  }
  else {
    local_1a8 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  iVar6 = iVar7;
  if (0 < (int)local_1a8) {
    do {
      if ((*(longlong *)&param_1->field_0x68 == 0) ||
         (uVar5 = 1, *(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        uVar5 = 0;
      }
      if (3 < iVar4) {
        puVar3 = *(ulonglong **)&param_1->field_0x8;
        if (puVar3[1] < *puVar3 + 4) {
          local_1b8 = 0;
          if ((param_1->field_0x28 & 1) == 0) {
            local_1b8 = uVar5;
          }
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b8,4);
          if (1 < local_1b8) {
            FArchiveState::SetError((FArchiveState *)param_1);
          }
        }
        else {
          *puVar3 = *puVar3 + 4;
        }
      }
      local_180 = 0;
      uStack_176 = 0;
      local_170[0] = FIoChunkId::InvalidChunkId.Id[0];
      local_170[1] = FIoChunkId::InvalidChunkId.Id[1];
      local_170[2] = FIoChunkId::InvalidChunkId.Id[2];
      local_170[3] = FIoChunkId::InvalidChunkId.Id[3];
      local_170[4] = FIoChunkId::InvalidChunkId.Id[4];
      local_170[5] = FIoChunkId::InvalidChunkId.Id[5];
      local_170[6] = FIoChunkId::InvalidChunkId.Id[6];
      local_170[7] = FIoChunkId::InvalidChunkId.Id[7];
      local_188.RawData = (void *)0x0;
      uStack_17b = 0xffffffff;
      uStack_177 = 0xff;
      local_168[0] = FIoChunkId::InvalidChunkId.Id[8];
      local_168[1] = FIoChunkId::InvalidChunkId.Id[9];
      local_168[2] = FIoChunkId::InvalidChunkId.Id[10];
      local_168[3] = FIoChunkId::InvalidChunkId.Id[0xb];
      FBulkData::Serialize((FBulkData *)&local_188,param_1,(UObject *)this,false,1,None);
      FBulkData::~FBulkData((FBulkData *)&local_188);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_1a8);
  }
  if (2 < iVar4) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_1b4 = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1b4);
      }
    }
    else {
      local_1b4 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (0 < (int)local_1b4) {
      do {
        plVar2 = *(longlong **)&param_1->field_0x8;
        local_1b8 = 0;
        if ((ulonglong)plVar2[1] < *plVar2 + 4U) {
          if ((*puVar1 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_1b8);
          }
        }
        else {
          *plVar2 = *plVar2 + 4;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_1b4);
    }
  }
  return;
}

// Serialize @ 148a138e0

void __thiscall UVirtualTexture::Serialize(UVirtualTexture *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUVirtualTexture @ 148a18880

void __cdecl UVirtualTexture::StaticRegisterNativesUVirtualTexture(void)

{
  return;
}

