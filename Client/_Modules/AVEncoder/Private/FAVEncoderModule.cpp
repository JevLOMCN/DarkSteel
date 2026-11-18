// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 1

// ShutdownModule @ 148cff220

void __thiscall FAVEncoderModule::ShutdownModule(FAVEncoderModule *this)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&AVEncoder::FVideoEncoderFactory::ProtectSingleton);
  if (AVEncoder::FVideoEncoderFactory::Singleton.bWasSetup != (FThreadSafeBool)0x0) {
    LOCK();
    AVEncoder::FVideoEncoderFactory::Singleton.bWasSetup = (FThreadSafeBool)0x0;
    UNLOCK();
    AVEncoder::FVideoEncoderFactory::Singleton.bDebugDontRegisterDefaultCodecs = false;
    DestructItems<AVEncoder::FVideoEncoderInfo,int>
              ((FVideoEncoderInfo *)
               AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.AllocatorInstance.Data,
               AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.ArrayNum);
    AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.ArrayNum = 0;
    if (AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.
                           AllocatorInstance,0,
                 &AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.ArrayMax);
    }
    DestructItems<TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>,int>
              ((TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>
                *)AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.AllocatorInstance.Data,
               AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.ArrayNum);
    AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.ArrayNum = 0;
    if (AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,
                 &AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.AllocatorInstance,0,
                 &AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.ArrayMax);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cff2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&AVEncoder::FVideoEncoderFactory::ProtectSingleton);
  return;
}

