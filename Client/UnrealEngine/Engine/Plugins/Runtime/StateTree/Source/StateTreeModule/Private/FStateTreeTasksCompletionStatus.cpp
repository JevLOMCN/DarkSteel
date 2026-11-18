// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 18

// StaticStruct @ 14d526690

UScriptStruct * __cdecl FStateTreeTasksCompletionStatus::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTasksCompletionStatus.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeTasksCompletionStatus.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTasksCompletionStatus,(UObject *)pUVar1
                         ,L"StateTreeTasksCompletionStatus");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeTasksCompletionStatus.OuterSingleton;
}

// GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int_const_>_> @ 14d52b720

TTasksCompletionStatus<unsigned_int_const_> * __thiscall
FStateTreeTasksCompletionStatus::
GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int_const_>_>
          (FStateTreeTasksCompletionStatus *this,
          TTasksCompletionStatus<unsigned_int_const_> *__return_storage_ptr__,uint param_1,
          uchar param_2,uchar param_3,EStateTreeTaskCompletionType param_4)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TTasksCompletionStatus<unsigned_int_const_> *pTVar4;
  uint *puVar5;
  
  if (param_2 < this->BufferNum) {
    if (this->BufferNum < 2) {
      if (param_2 != '\0') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferIndex == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeTasksStatus.cpp"
                           ,0x61,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TTasksCompletionStatus<unsigned_int_const_> *)(*pcVar2)();
          return pTVar4;
        }
      }
      puVar5 = (uint *)((longlong)&this->Buffer + 4);
      if (puVar5 == (uint *)0x0) goto LAB_14d52b825;
      __return_storage_ptr__->FirstCompletionBits = (uint *)this;
    }
    else {
      puVar1 = this->Buffer + (uint)param_2 * 2;
      puVar5 = puVar1 + 1;
      if ((puVar5 == (uint *)0x0) || (puVar1 == (uint *)0x0)) goto LAB_14d52b825;
      __return_storage_ptr__->FirstCompletionBits = puVar1;
    }
    __return_storage_ptr__->SecondCompletionBits = puVar5;
    __return_storage_ptr__->BitIndex = (uint)param_3;
    __return_storage_ptr__->TaskControl = param_4;
    __return_storage_ptr__->CompletionMask = param_1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeTasksStatus.cpp"
                     ,0x6e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TTasksCompletionStatus<unsigned_int_const_> *)(*pcVar2)();
    return pTVar4;
  }
  puVar5 = (uint *)((longlong)&this->Buffer + 4);
  this->BufferNum = '\x01';
  if (puVar5 != (uint *)0x0) {
    __return_storage_ptr__->SecondCompletionBits = puVar5;
    __return_storage_ptr__->CompletionMask = 0;
    __return_storage_ptr__->BitIndex = 0;
    __return_storage_ptr__->FirstCompletionBits = (uint *)this;
    __return_storage_ptr__->TaskControl = Any;
    return __return_storage_ptr__;
  }
LAB_14d52b825:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int>_> @ 14d52b840

TTasksCompletionStatus<unsigned_int> * __thiscall
FStateTreeTasksCompletionStatus::
GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int>_>
          (FStateTreeTasksCompletionStatus *this,
          TTasksCompletionStatus<unsigned_int> *__return_storage_ptr__,uint param_1,uchar param_2,
          uchar param_3,EStateTreeTaskCompletionType param_4)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TTasksCompletionStatus<unsigned_int> *pTVar4;
  uint *puVar5;
  
  if (param_2 < this->BufferNum) {
    if (this->BufferNum < 2) {
      if (param_2 != '\0') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferIndex == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeTasksStatus.cpp"
                           ,0x61,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TTasksCompletionStatus<unsigned_int> *)(*pcVar2)();
          return pTVar4;
        }
      }
      puVar5 = (uint *)((longlong)&this->Buffer + 4);
      if (puVar5 == (uint *)0x0) goto LAB_14d52b945;
      __return_storage_ptr__->FirstCompletionBits = (uint *)this;
    }
    else {
      puVar1 = this->Buffer + (uint)param_2 * 2;
      puVar5 = puVar1 + 1;
      if ((puVar5 == (uint *)0x0) || (puVar1 == (uint *)0x0)) goto LAB_14d52b945;
      __return_storage_ptr__->FirstCompletionBits = puVar1;
    }
    __return_storage_ptr__->SecondCompletionBits = puVar5;
    __return_storage_ptr__->BitIndex = (uint)param_3;
    __return_storage_ptr__->TaskControl = param_4;
    __return_storage_ptr__->CompletionMask = param_1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeTasksStatus.cpp"
                     ,0x6e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TTasksCompletionStatus<unsigned_int> *)(*pcVar2)();
    return pTVar4;
  }
  puVar5 = (uint *)((longlong)&this->Buffer + 4);
  this->BufferNum = '\x01';
  if (puVar5 != (uint *)0x0) {
    __return_storage_ptr__->SecondCompletionBits = puVar5;
    __return_storage_ptr__->CompletionMask = 0;
    __return_storage_ptr__->BitIndex = 0;
    __return_storage_ptr__->FirstCompletionBits = (uint *)this;
    __return_storage_ptr__->TaskControl = Any;
    return __return_storage_ptr__;
  }
LAB_14d52b945:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FStateTreeTasksCompletionStatus @ 14d52cbe0

FStateTreeTasksCompletionStatus * __thiscall
FStateTreeTasksCompletionStatus::FStateTreeTasksCompletionStatus
          (FStateTreeTasksCompletionStatus *this,FStateTreeTasksCompletionStatus *param_1)

{
  this->Buffer = param_1->Buffer;
  this->BufferNum = param_1->BufferNum;
  param_1->Buffer = (uint *)0x0;
  param_1->BufferNum = '\0';
  return this;
}

// FStateTreeTasksCompletionStatus @ 14d52cc10

FStateTreeTasksCompletionStatus * __thiscall
FStateTreeTasksCompletionStatus::FStateTreeTasksCompletionStatus
          (FStateTreeTasksCompletionStatus *this,FStateTreeTasksCompletionStatus *param_1)

{
  byte bVar1;
  uint *_Dst;
  ulong64 _Size;
  
  this->Buffer = (uint *)0x0;
  bVar1 = param_1->BufferNum;
  this->BufferNum = bVar1;
  if (1 < param_1->BufferNum) {
    _Size = (ulonglong)bVar1 << 3;
    _Dst = FMemory::Malloc(_Size,0);
    this->Buffer = _Dst;
    memcpy(_Dst,param_1->Buffer,_Size);
    return this;
  }
  this->Buffer = param_1->Buffer;
  return this;
}

// FStateTreeTasksCompletionStatus @ 14d52cc90

FStateTreeTasksCompletionStatus * __thiscall
FStateTreeTasksCompletionStatus::FStateTreeTasksCompletionStatus
          (FStateTreeTasksCompletionStatus *this,FCompactStateTreeFrame *param_1)

{
  byte bVar1;
  uint *_Dst;
  
  this->BufferNum = '\0';
  this->Buffer = (uint *)0x0;
  bVar1 = param_1->NumberOfTasksStatusMasks;
  this->BufferNum = bVar1;
  if (1 < bVar1) {
    _Dst = FMemory::Malloc((ulonglong)bVar1 << 5,0);
    this->Buffer = _Dst;
    memset(_Dst,0,(ulonglong)bVar1 * 8);
  }
  return this;
}

// ~FStateTreeTasksCompletionStatus @ 14d52ce40

void __thiscall
FStateTreeTasksCompletionStatus::~FStateTreeTasksCompletionStatus
          (FStateTreeTasksCompletionStatus *this)

{
  if (1 < this->BufferNum) {
    FMemory::Free(this->Buffer);
    this->Buffer = (uint *)0x0;
    this->BufferNum = '\0';
    return;
  }
  this->Buffer = (uint *)0x0;
  this->BufferNum = '\0';
  return;
}

// operator= @ 14d52d360

FStateTreeTasksCompletionStatus * __thiscall
FStateTreeTasksCompletionStatus::operator=
          (FStateTreeTasksCompletionStatus *this,FStateTreeTasksCompletionStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeTasksCompletionStatus *pFVar3;
  
  if (this == param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("this != &Other",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeTasksStatus.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateTreeTasksCompletionStatus *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (1 < this->BufferNum) {
    FMemory::Free(this->Buffer);
  }
  this->Buffer = (uint *)0x0;
  this->BufferNum = '\0';
  this->BufferNum = param_1->BufferNum;
  this->Buffer = param_1->Buffer;
  param_1->Buffer = (uint *)0x0;
  param_1->BufferNum = '\0';
  return this;
}

// operator= @ 14d52d3e0

FStateTreeTasksCompletionStatus * __thiscall
FStateTreeTasksCompletionStatus::operator=
          (FStateTreeTasksCompletionStatus *this,FStateTreeTasksCompletionStatus *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeTasksCompletionStatus *pFVar4;
  uint *_Dst;
  ulong64 _Size;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("this != &Other",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeTasksStatus.cpp"
                       ,0x31,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeTasksCompletionStatus *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (1 < this->BufferNum) {
    FMemory::Free(this->Buffer);
  }
  this->BufferNum = '\0';
  this->Buffer = (uint *)0x0;
  bVar1 = param_1->BufferNum;
  this->BufferNum = bVar1;
  if (1 < param_1->BufferNum) {
    _Size = (ulonglong)bVar1 << 3;
    _Dst = FMemory::Malloc(_Size,0);
    this->Buffer = _Dst;
    memcpy(_Dst,param_1->Buffer,_Size);
    return this;
  }
  this->Buffer = param_1->Buffer;
  return this;
}

// CopyBuffer @ 14d52ddb0

void __thiscall
FStateTreeTasksCompletionStatus::CopyBuffer
          (FStateTreeTasksCompletionStatus *this,FStateTreeTasksCompletionStatus *param_1)

{
  uint *_Dst;
  ulong64 _Size;
  
  if (1 < param_1->BufferNum) {
    _Size = (ulonglong)this->BufferNum << 3;
    _Dst = FMemory::Malloc(_Size,0);
    this->Buffer = _Dst;
    memcpy(_Dst,param_1->Buffer,_Size);
    return;
  }
  this->Buffer = param_1->Buffer;
  return;
}

// GetStatus @ 14d531190

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

TTasksCompletionStatus<unsigned_int> * __thiscall
FStateTreeTasksCompletionStatus::GetStatus
          (FStateTreeTasksCompletionStatus *this,
          TTasksCompletionStatus<unsigned_int> *__return_storage_ptr__,
          FCompactStateTreeState *param_1)

{
  GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int>_>
            (this,__return_storage_ptr__,param_1->CompletionTasksMask,
             param_1->CompletionTasksMaskBufferIndex,param_1->CompletionTasksMaskBitsOffset,
             param_1->CompletionTasksControl);
  return __return_storage_ptr__;
}

// GetStatus @ 14d5311d0

TTasksCompletionStatus<unsigned_int> * __thiscall
FStateTreeTasksCompletionStatus::GetStatus
          (FStateTreeTasksCompletionStatus *this,
          TTasksCompletionStatus<unsigned_int> *__return_storage_ptr__,
          TNotNull<UStateTree_const_*> param_1)

{
  GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int>_>
            (this,__return_storage_ptr__,(param_1.Val)->CompletionGlobalTasksMask,'\0','\0',
             (param_1.Val)->CompletionGlobalTasksControl);
  return __return_storage_ptr__;
}

// GetStatus @ 14d531210

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

TTasksCompletionStatus<unsigned_int_const_> * __thiscall
FStateTreeTasksCompletionStatus::GetStatus
          (FStateTreeTasksCompletionStatus *this,
          TTasksCompletionStatus<unsigned_int_const_> *__return_storage_ptr__,
          FCompactStateTreeState *param_1)

{
  GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int_const_>_>
            (this,__return_storage_ptr__,param_1->CompletionTasksMask,
             param_1->CompletionTasksMaskBufferIndex,param_1->CompletionTasksMaskBitsOffset,
             param_1->CompletionTasksControl);
  return __return_storage_ptr__;
}

// GetStatus @ 14d531250

TTasksCompletionStatus<unsigned_int_const_> * __thiscall
FStateTreeTasksCompletionStatus::GetStatus
          (FStateTreeTasksCompletionStatus *this,
          TTasksCompletionStatus<unsigned_int_const_> *__return_storage_ptr__,
          TNotNull<UStateTree_const_*> param_1)

{
  GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int_const_>_>
            (this,__return_storage_ptr__,(param_1.Val)->CompletionGlobalTasksMask,'\0','\0',
             (param_1.Val)->CompletionGlobalTasksControl);
  return __return_storage_ptr__;
}

// MallocBufferIfNeeded @ 14d5325f0

void __thiscall
FStateTreeTasksCompletionStatus::MallocBufferIfNeeded(FStateTreeTasksCompletionStatus *this)

{
  byte bVar1;
  uint *_Dst;
  
  bVar1 = this->BufferNum;
  if (1 < bVar1) {
    _Dst = FMemory::Malloc((ulonglong)bVar1 << 5,0);
    this->Buffer = _Dst;
    memset(_Dst,0,(ulonglong)bVar1 * 8);
  }
  return;
}

// NetSerialize @ 14d532940

bool __thiscall
FStateTreeTasksCompletionStatus::NetSerialize
          (FStateTreeTasksCompletionStatus *this,FArchive *param_1,UPackageMap *param_2,
          bool *param_3)

{
  bool bVar1;
  
  *param_3 = true;
  bVar1 = Serialize(this,param_1);
  return bVar1;
}

// Push @ 14d533130

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

void __thiscall
FStateTreeTasksCompletionStatus::Push
          (FStateTreeTasksCompletionStatus *this,FCompactStateTreeState *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TTasksCompletionStatus<unsigned_int> local_28;
  
  if (this->BufferNum <= param_1->CompletionTasksMaskBufferIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferNum > State.CompletionTasksMaskBufferIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeTasksStatus.cpp"
                       ,0xb3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  GetStatusInternal<UE::StateTree::TTasksCompletionStatus<unsigned_int>_>
            (this,&local_28,param_1->CompletionTasksMask,param_1->CompletionTasksMaskBufferIndex,
             param_1->CompletionTasksMaskBitsOffset,param_1->CompletionTasksControl);
  bVar1 = param_1->TasksNum;
  if (bVar1 == 0) {
    iVar4 = 1;
  }
  else {
    if (bVar1 == 0x20) {
      uVar5 = 0xffffffff;
      goto LAB_14d5331bf;
    }
    iVar4 = (1 << (bVar1 & 0x1f)) + -1;
  }
  uVar5 = iVar4 << ((byte)local_28.BitIndex & 0x1f);
LAB_14d5331bf:
  *local_28.FirstCompletionBits = *local_28.FirstCompletionBits & ~uVar5;
  *local_28.SecondCompletionBits = *local_28.SecondCompletionBits & ~uVar5;
  return;
}

// Serialize @ 14d533550

bool __thiscall
FStateTreeTasksCompletionStatus::Serialize(FStateTreeTasksCompletionStatus *this,FArchive *param_1)

{
  longlong *plVar1;
  uchar *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte local_res10 [8];
  
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
      if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->BufferNum,1);
      }
      else {
        this->BufferNum = *puVar2;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
      if (this->BufferNum < 2) {
        ::operator<<(param_1,(uint *)this);
        ::operator<<(param_1,(uint *)((longlong)&this->Buffer + 4));
      }
      else {
        uVar7 = 0;
        uVar6 = uVar7;
        if (this->BufferNum != 0) {
          do {
            puVar5 = (uint *)((longlong)this->Buffer + uVar7);
            puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,puVar5);
              }
            }
            else {
              *puVar5 = *puVar3;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar4 = (int)uVar6 + 1;
            uVar7 = uVar7 + 4;
            uVar6 = (ulonglong)uVar4;
          } while ((int)uVar4 < (int)((uint)this->BufferNum * 2));
        }
      }
    }
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res10[0] = 0;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    uVar6 = 0;
    uVar4 = (uint)(char)local_res10[0];
    if (uVar4 != this->BufferNum) {
      if (1 < this->BufferNum) {
        FMemory::Free(this->Buffer);
        uVar4 = (uint)local_res10[0];
      }
      this->Buffer = (uint *)0x0;
      this->BufferNum = (byte)uVar4;
      if (1 < (byte)uVar4) {
        puVar3 = FMemory::Malloc((ulonglong)(uVar4 & 0xff) << 5,0);
        this->Buffer = puVar3;
        memset(puVar3,0,(ulonglong)(uVar4 & 0xff) * 8);
      }
    }
    if (this->BufferNum < 2) {
      ::operator<<(param_1,(uint *)this);
      ::operator<<(param_1,(uint *)((longlong)&this->Buffer + 4));
      return true;
    }
    uVar7 = uVar6;
    if (this->BufferNum != 0) {
      do {
        puVar5 = (uint *)((longlong)this->Buffer + uVar6);
        puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar5);
          }
        }
        else {
          *puVar5 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar4 = (int)uVar7 + 1;
        uVar6 = uVar6 + 4;
        uVar7 = (ulonglong)uVar4;
      } while ((int)uVar4 < (int)((uint)this->BufferNum * 2));
      return true;
    }
  }
  return true;
}

