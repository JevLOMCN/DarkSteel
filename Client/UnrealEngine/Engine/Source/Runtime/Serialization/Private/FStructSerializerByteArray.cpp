// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 2

// StaticStruct @ 148b86820

UScriptStruct * __cdecl FStructSerializerByteArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar1,
                         L"StructSerializerByteArray");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
}

// FStructSerializerByteArray @ 148b9c9e0

FStructSerializerByteArray * __thiscall
FStructSerializerByteArray::FStructSerializerByteArray(FStructSerializerByteArray *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FStructSerializerByteArray *pFVar5;
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  FScriptContainerElement local_26;
  FScriptContainerElement local_25;
  FScriptContainerElement local_24 [12];
  
  this->Dummy1 = 1;
  (this->ByteArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteArray).ArrayNum = 0;
  (this->ByteArray).ArrayMax = 0;
  (this->Int8Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int8Array).ArrayNum = 0;
  (this->Int8Array).ArrayMax = 0;
  this->Dummy2 = 2;
  this->Dummy3 = 3;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x101,&(this->ByteArray).AllocatorInstance,&(this->ByteArray).ArrayMax);
  local_28 = (FScriptContainerElement)0x7f;
  (this->ByteArray).ArrayNum = iVar4 + 1;
  (this->ByteArray).AllocatorInstance.Data[iVar4] = (FScriptContainerElement)0x0;
  pFVar1 = (this->ByteArray).AllocatorInstance.Data;
  if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (this->ByteArray).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStructSerializerByteArray *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->ByteArray).ArrayNum;
  if (iVar4 == (this->ByteArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->ByteArray).AllocatorInstance,&(this->ByteArray).ArrayMax);
  }
  (this->ByteArray).ArrayNum = iVar4 + 1;
  local_27 = (FScriptContainerElement)0xff;
  (this->ByteArray).AllocatorInstance.Data[iVar4] = local_28;
  pFVar1 = (this->ByteArray).AllocatorInstance.Data;
  if ((pFVar1 <= &local_27) && (&local_27 < pFVar1 + (this->ByteArray).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStructSerializerByteArray *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->ByteArray).ArrayNum;
  if (iVar4 == (this->ByteArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->ByteArray).AllocatorInstance,&(this->ByteArray).ArrayMax);
    (this->ByteArray).ArrayNum = iVar4;
  }
  (this->ByteArray).ArrayNum = iVar4 + 1;
  local_26 = (FScriptContainerElement)0x80;
  (this->ByteArray).AllocatorInstance.Data[iVar4] = local_27;
  pFVar1 = (this->Int8Array).AllocatorInstance.Data;
  if ((pFVar1 <= &local_26) && (&local_26 < pFVar1 + (this->Int8Array).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStructSerializerByteArray *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Int8Array).ArrayNum;
  if (iVar4 == (this->Int8Array).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->Int8Array).AllocatorInstance,&(this->Int8Array).ArrayMax);
  }
  (this->Int8Array).ArrayNum = iVar4 + 1;
  local_25 = (FScriptContainerElement)0x0;
  (this->Int8Array).AllocatorInstance.Data[iVar4] = local_26;
  pFVar1 = (this->Int8Array).AllocatorInstance.Data;
  if ((pFVar1 <= &local_25) && (&local_25 < pFVar1 + (this->Int8Array).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStructSerializerByteArray *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Int8Array).ArrayNum;
  if (iVar4 == (this->Int8Array).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->Int8Array).AllocatorInstance,&(this->Int8Array).ArrayMax);
  }
  (this->Int8Array).ArrayNum = iVar4 + 1;
  local_24[0] = (FScriptContainerElement)0x7f;
  (this->Int8Array).AllocatorInstance.Data[iVar4] = local_25;
  pFVar1 = (this->Int8Array).AllocatorInstance.Data;
  if ((pFVar1 <= local_24) && (local_24 < pFVar1 + (this->Int8Array).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStructSerializerByteArray *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Int8Array).ArrayNum;
  if (iVar4 == (this->Int8Array).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->Int8Array).AllocatorInstance,&(this->Int8Array).ArrayMax);
  }
  (this->Int8Array).ArrayNum = iVar4 + 1;
  (this->Int8Array).AllocatorInstance.Data[iVar4] = local_24[0];
  return this;
}

