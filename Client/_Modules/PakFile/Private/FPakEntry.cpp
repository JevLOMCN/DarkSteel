// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 4

// FPakEntry @ 142a53120

FPakEntry * __thiscall FPakEntry::FPakEntry(FPakEntry *this,FPakEntry *param_1)

{
  TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  pTVar1 = &this->CompressionBlocks;
  this->Offset = param_1->Offset;
  this->Size = param_1->Size;
  this->UncompressedSize = param_1->UncompressedSize;
  uVar4 = *(undefined8 *)(param_1->Hash + 8);
  *(undefined8 *)this->Hash = *(undefined8 *)param_1->Hash;
  *(undefined8 *)(this->Hash + 8) = uVar4;
  *(undefined4 *)(this->Hash + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CompressionBlocks).ArrayMax;
  iVar3 = (param_1->CompressionBlocks).ArrayNum;
  _Src = (param_1->CompressionBlocks).AllocatorInstance.Data;
  (this->CompressionBlocks).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  this->CompressionBlockSize = param_1->CompressionBlockSize;
  this->CompressionMethodIndex = param_1->CompressionMethodIndex;
  this->Flags = param_1->Flags;
  this->Verified = param_1->Verified;
  return this;
}

// Reset @ 142a99e70

void __thiscall FPakEntry::Reset(FPakEntry *this)

{
  int *piVar1;
  
  this->Offset = -1;
  this->Size = 0;
  this->UncompressedSize = 0;
  this->Hash[0] = '\0';
  this->Hash[1] = '\0';
  this->Hash[2] = '\0';
  this->Hash[3] = '\0';
  this->Hash[4] = '\0';
  this->Hash[5] = '\0';
  this->Hash[6] = '\0';
  this->Hash[7] = '\0';
  this->Hash[8] = '\0';
  this->Hash[9] = '\0';
  this->Hash[10] = '\0';
  this->Hash[0xb] = '\0';
  this->Hash[0xc] = '\0';
  this->Hash[0xd] = '\0';
  this->Hash[0xe] = '\0';
  this->Hash[0xf] = '\0';
  this->Hash[0x10] = '\0';
  this->Hash[0x11] = '\0';
  this->Hash[0x12] = '\0';
  this->Hash[0x13] = '\0';
  piVar1 = &(this->CompressionBlocks).ArrayMax;
  (this->CompressionBlocks).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CompressionBlocks).AllocatorInstance,0,piVar1);
  }
  this->CompressionBlockSize = 0;
  this->CompressionMethodIndex = 0;
  this->Flags = '\0';
  this->Verified = false;
  return;
}

// Serialize @ 142a9e4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakEntry::Serialize(FPakEntry *this,FArchive *param_1,int param_2)

{
  undefined1 *puVar1;
  long64 *plVar2;
  long64 *plVar3;
  longlong *plVar4;
  uint *puVar5;
  uchar *puVar6;
  uint *puVar7;
  ulong64 local_res8;
  uint local_res18 [2];
  
  plVar2 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
    }
  }
  else {
    this->Offset = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar2 = &this->Size;
  puVar1 = &param_1->field_0x2a;
  plVar3 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar2);
    }
  }
  else {
    *plVar2 = *plVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar2 = &this->UncompressedSize;
  plVar3 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar2);
    }
  }
  else {
    *plVar2 = *plVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  puVar5 = (uint *)*plVar4;
  if (param_2 < 8) {
    if ((uint *)plVar4[1] < puVar5 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *puVar5;
      *plVar4 = (longlong)(puVar5 + 1);
    }
    if (local_res18[0] == 0) {
      this->CompressionMethodIndex = 0;
    }
    else if ((local_res18[0] & 1) == 0) {
      if ((local_res18[0] & 2) == 0) {
        if ((local_res18[0] & 4) == 0) {
          UE::Logging::Private::BasicFatalLog
                    (&`public:_void___cdecl_FPakEntry::Serialize(FArchive&___ptr64,int)___ptr64'::
                      __l23::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        else {
          this->CompressionMethodIndex = 3;
        }
      }
      else {
        this->CompressionMethodIndex = 2;
      }
    }
    else {
      this->CompressionMethodIndex = 1;
    }
    if (param_2 < 2) {
      plVar4 = *(longlong **)&param_1->field_0x8;
      local_res8 = 0;
      if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_res8);
        }
      }
      else {
        local_res8 = *(ulong64 *)*plVar4;
        *plVar4 = *plVar4 + 8;
      }
    }
  }
  else {
    puVar7 = &this->CompressionMethodIndex;
    if ((uint *)plVar4[1] < puVar5 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar7);
      }
    }
    else {
      *puVar7 = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this->Hash,0x14);
  if (2 < param_2) {
    if (this->CompressionMethodIndex != 0) {
      TArrayPrivateFriend::Serialize<FPakCompressedBlock,TSizedDefaultAllocator<32>_>
                (param_1,&this->CompressionBlocks);
    }
    puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Flags,1);
    }
    else {
      this->Flags = *puVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar5 = &this->CompressionBlockSize;
    puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if (puVar7 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *puVar5 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return;
    }
    if ((*puVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142a9e7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,puVar5);
  }
  return;
}

// VerifyPakEntriesMatch @ 142aac170

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FPakEntry::VerifyPakEntriesMatch(FPakEntry *param_1,FPakEntry *param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (param_1->Size != param_2->Size) {
    if (1 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    bVar1 = false;
  }
  if (param_1->UncompressedSize != param_2->UncompressedSize) {
    if (1 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    bVar1 = false;
  }
  if (param_1->CompressionMethodIndex != param_2->CompressionMethodIndex) {
    if (1 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    bVar1 = false;
  }
  if (((*(longlong *)param_1->Hash != *(longlong *)param_2->Hash) ||
      (*(longlong *)(param_1->Hash + 8) != *(longlong *)(param_2->Hash + 8))) ||
     (*(int *)(param_1->Hash + 0x10) != *(int *)(param_2->Hash + 0x10))) {
    if (1 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    bVar1 = false;
  }
  return bVar1;
}

