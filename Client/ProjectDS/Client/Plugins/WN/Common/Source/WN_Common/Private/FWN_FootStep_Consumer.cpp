// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 3

// StaticStruct @ 149482230

UScriptStruct * __cdecl FWN_FootStep_Consumer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_FootStep_Consumer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UScriptStruct_FWN_FootStep_Consumer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_FootStep_Consumer,(UObject *)pUVar1,
                         L"WN_FootStep_Consumer");
  }
  return Z_Registration_Info_UScriptStruct_FWN_FootStep_Consumer.OuterSingleton;
}

// FWN_FootStep_Consumer @ 14948cc80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWN_FootStep_Consumer * __thiscall
FWN_FootStep_Consumer::FWN_FootStep_Consumer(FWN_FootStep_Consumer *this)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  TVector4<float>_u_0 local_18;
  
  (this->PhysicalSurface).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalSurface).Data.ArrayNum = 0;
  (this->PhysicalSurface).Data.ArrayMax = 0;
  (this->NameVariations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameVariations).ArrayNum = 0;
  (this->NameVariations).ArrayMax = 0;
  *(undefined8 *)&this->SoundByStrength = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x8 = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x20 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x28 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundByStrength).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundByStrength).field_0x34 = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x40 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x48 = 0;
  puVar1 = &(this->CascadeParticle).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->CascadeParticle).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->CascadeParticle).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CascadeParticle).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CascadeParticle).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->CascadeParticle).SoftObjectPtr,(FObjectPtr)&local_res8);
  puVar1 = &(this->NiagaraParticle).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->NiagaraParticle).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->NiagaraParticle).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NiagaraParticle).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NiagaraParticle).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->NiagaraParticle).SoftObjectPtr,(FObjectPtr)&local_res8);
  local_18._0_8_ = ___xmm_3f666666000000000000000000000000;
  local_18._8_8_ = _UNK_151e4ec98;
  this->CascadeScale = 1.0;
  this->NiagaraScale = 0.3;
  this->UseCascade = false;
  this->UseNiagara = true;
  FLinearColor::FLinearColor(&this->FootPrintColor,(TVector4<float> *)&local_18._s_0);
  return this;
}

// ~FWN_FootStep_Consumer @ 149490160

void __thiscall FWN_FootStep_Consumer::~FWN_FootStep_Consumer(FWN_FootStep_Consumer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  pvVar1 = *(void **)&(this->NiagaraParticle).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->CascadeParticle).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SoundByStrength).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SoundByStrength).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoundByStrength);
  DestructItems<FString,int>
            ((FString *)(this->NameVariations).AllocatorInstance.Data,
             (this->NameVariations).ArrayNum);
  pFVar2 = (this->NameVariations).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PhysicalSurface).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

