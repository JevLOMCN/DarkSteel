// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 5

// StaticStruct @ 148b86a80

UScriptStruct * __cdecl FStructSerializerArrayTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerArrayTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerArrayTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct,
                         (UObject *)pUVar1,L"StructSerializerArrayTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerArrayTestStruct.OuterSingleton;
}

// FStructSerializerArrayTestStruct @ 148b9bf30

FStructSerializerArrayTestStruct * __thiscall
FStructSerializerArrayTestStruct::FStructSerializerArrayTestStruct
          (FStructSerializerArrayTestStruct *this,FStructSerializerArrayTestStruct *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FStructSerializerBuiltinTestStruct,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FStructSerializerBuiltinTestStruct *pFVar7;
  
  piVar1 = &(this->Int32Array).ArrayMax;
  (this->Int32Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Int32Array).ArrayNum;
  pFVar6 = (param_1->Int32Array).AllocatorInstance.Data;
  (this->Int32Array).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->Int32Array).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar2 = &this->ByteArray;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ByteArray).ArrayMax;
  iVar5 = (param_1->ByteArray).ArrayNum;
  pFVar6 = (param_1->ByteArray).AllocatorInstance.Data;
  (this->ByteArray).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  pTVar3 = &this->VectorArray;
  this->StaticSingleElement[0] = param_1->StaticSingleElement[0];
  *(undefined8 *)this->StaticInt32Array = *(undefined8 *)param_1->StaticInt32Array;
  this->StaticInt32Array[2] = param_1->StaticInt32Array[2];
  *(undefined8 *)this->StaticFloatArray = *(undefined8 *)param_1->StaticFloatArray;
  this->StaticFloatArray[2] = param_1->StaticFloatArray[2];
  piVar1 = &(this->VectorArray).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->VectorArray).ArrayNum;
  pFVar6 = (param_1->VectorArray).AllocatorInstance.Data;
  (this->VectorArray).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  pTVar4 = &this->StructArray;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StructArray).ArrayMax;
  iVar5 = (param_1->StructArray).ArrayNum;
  pFVar7 = (FStructSerializerBuiltinTestStruct *)(param_1->StructArray).AllocatorInstance.Data;
  (this->StructArray).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    ConstructItems<FStructSerializerBuiltinTestStruct,FStructSerializerBuiltinTestStruct,int>
              ((pTVar4->AllocatorInstance).Data,pFVar7,iVar5);
  }
  return this;
}

// FStructSerializerArrayTestStruct @ 148b9c0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStructSerializerArrayTestStruct * __thiscall
FStructSerializerArrayTestStruct::FStructSerializerArrayTestStruct
          (FStructSerializerArrayTestStruct *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FStructSerializerArrayTestStruct *pFVar6;
  int *piVar7;
  int *piVar8;
  FScriptContainerElement local_68;
  FScriptContainerElement local_67;
  FScriptContainerElement local_66 [2];
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  (this->Int32Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int32Array).ArrayNum = 0;
  (this->Int32Array).ArrayMax = 0;
  (this->ByteArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteArray).ArrayNum = 0;
  (this->ByteArray).ArrayMax = 0;
  (this->VectorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorArray).ArrayNum = 0;
  (this->VectorArray).ArrayMax = 0;
  (this->StructArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StructArray).ArrayNum = 0;
  (this->StructArray).ArrayMax = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,(ForAnyElementType *)this,&(this->Int32Array).ArrayMax);
  local_64 = 0;
  (this->Int32Array).ArrayNum = iVar5 + 1;
  *(undefined4 *)((this->Int32Array).AllocatorInstance.Data + (longlong)iVar5 * 4) = 0xffffffff;
  pFVar1 = (this->Int32Array).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_64) &&
     ((FScriptContainerElement *)&local_64 < pFVar1 + (longlong)(this->Int32Array).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStructSerializerArrayTestStruct *)(*pcVar3)();
      return pFVar6;
    }
  }
  piVar8 = &(this->Int32Array).ArrayMax;
  piVar7 = &(this->Int32Array).ArrayNum;
  iVar5 = *piVar7;
  if (iVar5 == *piVar8) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,&(this->Int32Array).ArrayMax);
    *piVar7 = iVar5;
  }
  *piVar7 = iVar5 + 1;
  local_60[0] = 1;
  *(undefined4 *)((this->Int32Array).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_64;
  pFVar1 = (this->Int32Array).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_60) &&
     ((FScriptContainerElement *)local_60 < pFVar1 + (longlong)*piVar8 * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStructSerializerArrayTestStruct *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = *piVar7;
  if (iVar5 == *piVar8) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,&(this->Int32Array).ArrayMax);
    *piVar7 = iVar5;
  }
  *piVar7 = iVar5 + 1;
  local_68 = (FScriptContainerElement)0x0;
  *(undefined4 *)((this->Int32Array).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_60[0];
  pFVar1 = (this->ByteArray).AllocatorInstance.Data;
  if ((pFVar1 <= &local_68) && (&local_68 < pFVar1 + (this->ByteArray).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStructSerializerArrayTestStruct *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->ByteArray).ArrayNum;
  piVar7 = &(this->ByteArray).ArrayMax;
  if (iVar5 == (this->ByteArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->ByteArray).AllocatorInstance,piVar7);
  }
  (this->ByteArray).ArrayNum = iVar5 + 1;
  local_67 = (FScriptContainerElement)0x7f;
  (this->ByteArray).AllocatorInstance.Data[iVar5] = local_68;
  pFVar1 = (this->ByteArray).AllocatorInstance.Data;
  if ((pFVar1 <= &local_67) && (&local_67 < pFVar1 + (this->ByteArray).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStructSerializerArrayTestStruct *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->ByteArray).ArrayNum;
  if (iVar5 == (this->ByteArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->ByteArray).AllocatorInstance,piVar7);
  }
  (this->ByteArray).ArrayNum = iVar5 + 1;
  local_66[0] = (FScriptContainerElement)0xff;
  (this->ByteArray).AllocatorInstance.Data[iVar5] = local_67;
  pFVar1 = (this->ByteArray).AllocatorInstance.Data;
  if ((pFVar1 <= local_66) && (local_66 < pFVar1 + (this->ByteArray).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStructSerializerArrayTestStruct *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->ByteArray).ArrayNum;
  if (iVar5 == (this->ByteArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->ByteArray).AllocatorInstance,piVar7);
  }
  uStack_50 = _UNK_150744178;
  local_58 = ___xmm_40000000000000003ff0000000000000;
  (this->ByteArray).ArrayNum = iVar5 + 1;
  local_48 = __real_4008000000000000;
  (this->ByteArray).AllocatorInstance.Data[iVar5] = local_66[0];
  this->StaticInt32Array[1] = 0;
  this->StaticFloatArray[1] = 0.0;
  this->StaticSingleElement[0] = 0x2a;
  this->StaticInt32Array[0] = -1;
  this->StaticInt32Array[2] = 1;
  this->StaticFloatArray[0] = -1.0;
  this->StaticFloatArray[2] = 1.0;
  pFVar1 = (this->VectorArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar1 + (longlong)(this->VectorArray).ArrayMax * 0x18)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStructSerializerArrayTestStruct *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->VectorArray).ArrayNum;
  piVar7 = &(this->VectorArray).ArrayMax;
  if (iVar5 == (this->VectorArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->VectorArray).AllocatorInstance,piVar7);
  }
  (this->VectorArray).ArrayNum = iVar5 + 1;
  pFVar2 = (this->VectorArray).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x18;
  *(undefined8 *)pFVar1 = local_58;
  *(undefined8 *)(pFVar1 + 8) = uStack_50;
  uStack_38 = _UNK_15076c798;
  local_40 = ___xmm_c000000000000000bff0000000000000;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = local_48;
  pFVar1 = (this->VectorArray).AllocatorInstance.Data;
  local_30 = __real_c008000000000000;
  if ((pFVar1 <= (FScriptContainerElement *)&local_40) &&
     ((FScriptContainerElement *)&local_40 < pFVar1 + (longlong)(this->VectorArray).ArrayMax * 0x18)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStructSerializerArrayTestStruct *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->VectorArray).ArrayNum;
  if (iVar5 == (this->VectorArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->VectorArray).AllocatorInstance,piVar7);
  }
  (this->VectorArray).ArrayNum = iVar5 + 1;
  pFVar2 = (this->VectorArray).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x18;
  *(undefined8 *)pFVar1 = local_40;
  *(undefined8 *)(pFVar1 + 8) = uStack_38;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = local_30;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd0,0x10,2,&(this->StructArray).AllocatorInstance,
                     &(this->StructArray).ArrayNum,&(this->StructArray).ArrayMax);
  DefaultConstructItems<FStructSerializerBuiltinTestStruct,int>
            ((this->StructArray).AllocatorInstance.Data + (longlong)iVar5 * 0xd0,2);
  return this;
}

// ~FStructSerializerArrayTestStruct @ 148ba0570

void __thiscall
FStructSerializerArrayTestStruct::~FStructSerializerArrayTestStruct
          (FStructSerializerArrayTestStruct *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FStructSerializerBuiltinTestStruct,int>
            ((FStructSerializerBuiltinTestStruct *)(this->StructArray).AllocatorInstance.Data,
             (this->StructArray).ArrayNum);
  pFVar1 = (this->StructArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ByteArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Int32Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 148ba1370

FStructSerializerArrayTestStruct * __thiscall
FStructSerializerArrayTestStruct::operator=
          (FStructSerializerArrayTestStruct *this,FStructSerializerArrayTestStruct *param_1)

{
  int *piVar1;
  TArray<FStructSerializerBuiltinTestStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FStructSerializerBuiltinTestStruct *pFVar4;
  
  if (this != param_1) {
    iVar3 = (param_1->Int32Array).ArrayNum;
    piVar1 = &(this->Int32Array).ArrayMax;
    _Src = (param_1->Int32Array).AllocatorInstance.Data;
    (this->Int32Array).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,*piVar1,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Int32Array).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->ByteArray,&param_1->ByteArray)
  ;
  this->StaticSingleElement[0] = param_1->StaticSingleElement[0];
  this->StaticInt32Array[0] = param_1->StaticInt32Array[0];
  this->StaticInt32Array[1] = param_1->StaticInt32Array[1];
  this->StaticInt32Array[2] = param_1->StaticInt32Array[2];
  this->StaticFloatArray[0] = param_1->StaticFloatArray[0];
  this->StaticFloatArray[1] = param_1->StaticFloatArray[1];
  this->StaticFloatArray[2] = param_1->StaticFloatArray[2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->VectorArray,&param_1->VectorArray);
  pTVar2 = &this->StructArray;
  if (pTVar2 != &param_1->StructArray) {
    DestructItems<FStructSerializerBuiltinTestStruct,int>
              ((FStructSerializerBuiltinTestStruct *)(pTVar2->AllocatorInstance).Data,
               (this->StructArray).ArrayNum);
    iVar3 = (param_1->StructArray).ArrayNum;
    piVar1 = &(this->StructArray).ArrayMax;
    pFVar4 = (FStructSerializerBuiltinTestStruct *)(param_1->StructArray).AllocatorInstance.Data;
    (this->StructArray).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FStructSerializerBuiltinTestStruct,FStructSerializerBuiltinTestStruct,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

